#include<stdio.h>
int main(){
    int a =5;
    int b =3;
    int sum = a++ + --b;
    printf("%d\n",a++);
    printf("%d\n",a);
    return 0;
}