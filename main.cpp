#include<iostream>
#include"bubblesort.h"
#include"quicksort.h"
#include"insertsort.h"
#include"biinsertsort.h"
#include"shellsort.h"
#include"selectsort.h"
#include"heapsort.h"
#include"mergesort.h"
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;


int main(void){
    int arr[10]={0};
    srand((static_cast<unsigned>(time(nullptr))));

    for(int i=0;i<10;i++)
        arr[i]=rand()%100;
    cout<<"quicksort:"<<endl;
    for(int val:arr)
        cout<<val<<'\t';
    cout<<endl;
    if ( ! quickSort (arr,0,9)){
        for(int val:arr)
            std::cout<<val<<'\t';
        cout<<endl;
    }

     for(int i=0;i<10;i++)
         arr[i]=rand()%100;
     cout<<"bubblesort:"<<endl;
     for(int val:arr)
         cout<<val<<'\t';
     cout<<endl;
     if( ! bubbleSort(arr,10)){
         for(int val:arr)
             cout<<val<<'\t';
         cout<<endl;
     }

     for(int i=0;i<10;i++)
         arr[i]=rand()%100;
     cout<<"insertsort:"<<endl;
     for(int val:arr)
         cout<<val<<'\t';
     cout<<endl;
     if( ! insertsort(arr,10)){
         for(int val:arr)
             cout<<val<<'\t';
         cout<<endl;
     }

     for(int i=0;i<10;i++)
         arr[i]=rand()%100;
     cout<<"BIinsertsort:"<<endl;
     for(int val:arr)
         cout<<val<<'\t';
     cout<<endl;
     if( ! BIinsertSort(arr,10)){
         for(int val:arr)
             cout<<val<<'\t';
         cout<<endl;
     }

     for(int i=0;i<10;i++)
         arr[i]=rand()%100;
     cout<<"shellSort:"<<endl;
     for(int val:arr)
         cout<<val<<'\t';
     cout<<endl;
     if( ! shellSort(arr,10)){
         for(int val:arr)
             cout<<val<<'\t';
         cout<<endl;
     }

     for(int i=0;i<10;i++)
         arr[i]=rand()%100;
     cout<<"selectSort:"<<endl;
     for(int val:arr)
         cout<<val<<'\t';
     cout<<endl;
     if( ! selectSort(arr,10)){
         for(int val:arr)
             cout<<val<<'\t';
         cout<<endl;
     }

     for(int i=0;i<10;i++)
         arr[i]=rand()%100;
     cout<<"heapSort:"<<endl;
     for(int val:arr)
         cout<<val<<'\t';
     cout<<endl;
     if( ! heapSort(arr,10)){
         for(int val:arr)
             cout<<val<<'\t';
         cout<<endl;
     }

     for(int i=0;i<10;i++)
         arr[i]=rand()%100;
     cout<<"mergeSort:"<<endl;
     for(int val:arr)
         cout<<val<<'\t';
     cout<<endl;
     if( ! mergeSort(arr,0,9)){
         for(int val:arr)
             cout<<val<<'\t';
         cout<<endl;
     }

    return 0;
}
