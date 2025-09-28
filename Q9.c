#include<stdio.h>
int main (){
    int acc_no;// Mam its just a part of detail.
    int pin = 3132; // Im setting this pin by my self which will be compared with the user input.
    int userpin;
    int amount;
    int balance = 400000; // Im setting this pin by my self which will be compared with the user input.
    int new_balance;
    printf("Enter your Account number : ");
    scanf("%d",&acc_no);
    printf("Enter 4 digit pin code : ");
    scanf("%d",&userpin);
    if (userpin == pin){
        printf("Enter amount you want to withdraw : ");
        scanf("%d",&amount);
        if (amount<=balance){
            printf("Your transaction is being processed...");
            printf("Done.\n");
            new_balance = balance - amount;
            printf("Your remaining balance is %d ",new_balance);
        }
        else{
            printf("Insufficient balance");
        }
    }
    else {
        printf("Incorrect pin code entered, try again.");
    }
    return 0;
}