int insertsort(int arr[],int n){
    int temp=0;
    int j=0;
    for(int i=1;i<n;i++){
        temp=arr[i];
        for(j=i-1;j>=0 && temp<arr[j];j--)
            arr[j+1]=arr[j];
        arr[j+1]=temp;
    }
    return  0;
}
