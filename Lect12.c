// #include<stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//     //printf("%d",arr[3]);
//     for(int i=5;i>=0;i--){
//         printf("%d\n",arr[i]);
//     }
// }


#include<stdio.h>
int main(void){
    int arr[5]={1,2,3,4,5};
    int sum=0;
    for(int i=0;i<5;i++){
      sum=sum+arr[i];
    }
    printf("%d",sum);
}
