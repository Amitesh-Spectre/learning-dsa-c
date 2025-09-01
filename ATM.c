#include <stdio.h>
int main() {
    int choice;
    float balance= 1000; float deposit, withdraw;
    printf("   ATM MENU   \n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("Enter your Choice: ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("Your Balance is:%f\n",balance);
        break;

        case 2:
        printf("Enter amount to deposit: ");
        scanf("%f",&deposit);
        balance = balance + deposit ;
        printf("New Balance:%f\n",balance);
        break;

        case 3:
        printf("Enter amount to withdraw: ");
        scanf("%f",&withdraw);
        if (withdraw>balance){
            printf("Insufficient Balance\n");
        }
        else{
            balance = balance-withdraw;
            printf("New Balance:%f\n");
        }
        break;

        case 4:
        printf("Thank you for using ATM\n");
        break;

        default:
        printf("Invalid Choice\n");
    }
    return 0;
    
    
    
}