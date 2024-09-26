/*step1: pick element pivot=arr[0]
step2: declare i&j i->0 and j->length-1
siep3: i++,j--
step4: i++ when ar[i]<pivot
step5:  j-- when arr[i]>pivot
step6: when step6,7 is flase swap(pivot,arr[i])*/
#include<iostream>
using namespace std;

int partition(int arr[],int  end ){
    int pivot=arr[start];
    int i =start;
    int j = end;
    while (i<j){
        while(arr[i]<=pivot)i++;
        while(arr[j]>=pivot)j--;
    
    if(i<j){
        swap(arr[i],arr[j]);
    
    }
    else {
        break;

    }
    }


    swap(arr[start],arr[j]);
    return j;


}
int main(){
    int size;
    cout<<"enter the size : ";  
    cin>>size;
    int arr[size];
    cout<<"enter the element : ";
    for (int i=0 ;i<size;i++ ){
        cout<<arr[i]<<" ";

    }
    quickSort(arr,0,size-1);
    cout<<"sorted array is :";
    for (int i=0 ;i<size;i++ ){
        cout<<arr[i]<<" ";

    }
    
    return 0 ;
    


}