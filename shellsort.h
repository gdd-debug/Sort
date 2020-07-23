int Hibbard(int n){
    int gap=1;
    while(gap<n){
        gap=gap*2+1;
    }
    return gap;
}

int shellSort(int arr[],int n){
    int temp=0;
    int k;
    for(int gap=Hibbard(n);gap>=1;gap=(gap-1)>>1){
        for(int i=0;i<gap;i++){
            for(int j=gap+i;j<n;j+=gap){
               temp=arr[j];
               for(k=j-gap;k>=0 && temp<arr[k];k-=gap)
                   arr[k+gap]=arr[k];
               arr[k+gap]=temp;
            }
        }
    }

    return 0;
}
