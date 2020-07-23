int ajustDown(int arr[],int par,int n){
    int temp;
    for(int i=2*par+1;i<n;i=i*2+1){
        if(i+1<n && arr[i]<arr[i+1])
            i++;
        if(arr[par]>arr[i])
            break;
        else{
            temp=arr[par];
            arr[par]=arr[i];
            arr[i]=temp;
        }
        par=i;
    }
    return  0;
}

int buildMaxHeap(int arr[],int n){
    for(int i=(n-1)>>1;i>=0;i--)
        ajustDown(arr,i,n);
    return 0;
}

int heapSort(int arr[],int n){
    if( ! buildMaxHeap(arr,n) ){
        int temp;
        for(int i=n-1;i>=0;i--){
            temp=arr[i];
            arr[i]=arr[0];
            arr[0]=temp;
            ajustDown(arr,0,i);
        }
    }
    return 0;
}
