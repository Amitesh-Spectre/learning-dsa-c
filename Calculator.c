#include<stdio.h>
void main()
{
    int a,b,c,d ;
    printf("\nEnter 1st Number: ");
    scanf("%d",&a);
   printf("\nEnter 2nd Number: ");
   scanf("%d",&b);
    printf("\nEnter 3rd Number: ");
     scanf("%d",&c);
     printf("Select operation(Please enter 1-4) : ");
     scanf("%d",&d);
     if(d==1)
     printf("additon of these numbers is %d",a+b+c);
     else if(d==2)
     printf("subtraction of these numbers is %d",a-b-c);
    else if(d==3)
    printf("multiplication of these numbers is %d",a*b*c);
    else if(d==4)
    printf("Division of these numbers is %f",(float)a/b/c);
    else
    printf("Invalid Input");
}