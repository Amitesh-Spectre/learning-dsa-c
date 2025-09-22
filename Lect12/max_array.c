//Find Max in a array
#include<stdio.h>
int main(void){
    int arr[5]={1,2,3,5,4};
    int max=arr[0];
    for(int i=0;i<5;i++){
      if(arr[i]>max){
        max=arr[i];
      }
    }
    printf("%d",max);
}