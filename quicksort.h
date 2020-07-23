int partiotion(int arr[],int low,int high){
    int pivot=arr[low];
    while(low<high){
        while(arr[high]>pivot && low<high)
            high--;
        arr[low]=arr[high];
        while(arr[low]<=pivot && low<high)
            low++;
        arr[high]=arr[low];
    }
    arr[low]=pivot;
    return low;
}

int quickSort(int arr[],int low,int high){
    if(low<high){
        int pivotpos=partiotion(arr,low,high);
        quickSort(arr,low,pivotpos-1);
        quickSort(arr,pivotpos+1,high);
    }
    return 0;
}



