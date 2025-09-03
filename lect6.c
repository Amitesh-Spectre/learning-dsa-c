#include <stdio.h>
int main(){
    int n ,i;
    int factorial=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0){
        printf("Factorial dosen't exist for negative numnbers");
    }
    else{ 
        for(i=1;i<=n;i++){
            factorial=factorial*i;
        }
        printf("Factorial=%d",factorial);
    
    }

}