#include<stdio.h>
int main(){
    int percentage;
    char exam;
    char fee;
    printf("Enter your attendance percentgae : ");
    scanf("%d",&percentage);
    switch (percentage)
    {
    case 75 ... 100 :
        printf("Loading.. \n");
    break;
    default:
        printf("You are not eligible for Final Exam.");
    return 0;
    }
    printf("Have you Passed your Midterm exam (Enter P for pass , F for fail) : ");
    scanf(" %c",&exam);
    switch (exam)
    {
    case 'P' :
        printf("Congratulations! \n");
    break;
    case 'F':
        printf("You are not eligible for Final Exam.");
    return 0;
    default :
        printf("You have entered something wrong, Read instructions again.");
    return 0;
    }
    printf("Have you Paid the Fee exam (Enter Y for yes , N for no) : ");
    scanf(" %c",&fee);
    switch (fee)
    {
    case 'Y':
        printf("You are eligible for the Final Exam.");
    break;
    case 'N':
        printf("Please clear your dues to appear in the Final Exam.");
    break;
    default :
        printf("You have entered something wrong, Read Instructions again.");
    break;
    }
    return 0;
}