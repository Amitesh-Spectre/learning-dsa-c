//Array Shifting
#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int);
    int first=arr[0];
    for(int i=0;i<5;i++)
    {
        arr[i]=arr[i+1];
    } 
    arr[n-1]=first;
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
}

