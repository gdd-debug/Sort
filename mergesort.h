#include<memory>
static std::unique_ptr<int> ptr(new int[10]{0});

void merge(int arr[],int low,int mid,int high){
    int i=0,j=0,k=0;
    for(int i=low;i<=high;i++)
        ptr.get()[i]=arr[i];
    for(i=low,j=mid+1,k=i;i<=mid && j<=high;k++){
        if(ptr.get()[i]<=ptr.get()[j])
            arr[k]=ptr.get()[i++];
        else if(ptr.get()[j]<ptr.get()[i])
            arr[k]=ptr.get()[j++];
    }
    while(i>mid && j<=high)
        arr[k++]=ptr.get()[j++];
    while (j>high && i<=mid)
        arr[k++]=ptr.get()[i++];
}

int  mergeSort(int arr[],int low,int high){
    if(low<high){
        int mid=(low+high)>>1;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
    return  0;
}
