int BIinsertSort(int arr[],int n){
    int temp=0;
    for(int i=1;i<n;i++){
        int low=1,high=i;
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid-1]==arr[i]){
                high=mid;
                break;
            }
            if(arr[mid-1]>arr[i])
                high=mid-1;
            if(arr[mid-1]<arr[i])
                low=mid+1;
        }
        int j;
        temp=arr[i];
        for(j=i-1;j>=0 && j+1>high;j--)
            arr[j+1]=arr[j];
        arr[high]=temp;
    }
    return 0;
}
