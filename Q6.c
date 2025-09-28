#include<stdio.h>
int main (){
    printf("    \n");
    printf("Today we will learn how bitwise operators work in C.\n");
    printf("We will learn using this expression:- (a & b) | (a ^ b)\n");
    printf("we will take a=3, and b=5\n");
    printf("    \n");
    int a=3;
    int b=5;
    int o1;
    int o2;
    int o3;

    o1 = a&b;
    o2 = a^b;
    o3 = (a&b)|(a^b);

    printf("The binary operation for a&b works as\n \t\t00000011 & 00000101 is 00000001\t\t\n");
    printf("The operation for the expression  (a&b) is %d & %d is %d \n",a,b,o1);
    printf("    \n");
    printf("The binary operation for a^b works as\n \t\t\t00000011 ^ 00000101 is 00000110\t\t\t\n");
    printf("The operation for the expression  (a^b) is %d ^ %d is %d \n",a,b,o2);
    printf("    \n");
    printf("Now we have the value of each expression so we can now combine these to get our final answer.\n");
    printf("Now we have to put OR operator between the above two answers calculated. So lets do it!\n");
    printf("    \n");
    printf("The binary operation for (a&b) | (a^b) works as\n \t\t\t00000001 | 00000110 is 00000111\t\t\t\n");
    printf("The operation for the expression  (a&b) | (a^b) is %d | %d is %d \n",o1,o2,o3);

    printf("    \n");
    printf("So I hope I cleared this topic for you. THANKYOU!");

    return 0;
    

}