#include<stdio.h>
int main(){
    int arr[6]={1,2,2,1,5,7};
    int n = sizeof(arr)/sizeof(int);
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-i-1]){
            printf("This Array is not a palindrome");
            return 0;
        }
    }
    printf("This array is palindrome");
    return 0;
}