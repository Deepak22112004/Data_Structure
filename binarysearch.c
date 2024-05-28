#include<stdio.h>
void main(){
    int a[]={10,20,30,40,50,60,70};
    int low=0,high=6,mid,f=0,n;
    printf("enter number to be serched :");
    scanf("%d",&n);
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==n){
            f=1;
            break;
        }
        else if(a[mid]<n){
            low =mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(f==1){
        printf("element found ");
    }
    else{
        printf("element not found ");
    }
}