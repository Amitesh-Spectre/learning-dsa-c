//Find Min in a array
#include<stdio.h>
int main(void){
    int arr[5]={1,2,3,5,4};
    int min=arr[0];
    for(int i=0;i<5;i++){
      if(arr[i]>min){
        min=arr[i];
      }
    }
    printf("%d",max);
}

