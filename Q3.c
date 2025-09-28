#include<stdio.h>
int main(){
    int x = 2;
    int y = 8;
    int z = 4;
    int multiplication = y * z;
    int addition = x + multiplication;
    int subtraction = x - z;
    printf("Today we will learn how operator precedence works.\n");
    printf("    \n");
    printf("we will use this expression:- x + y * z > 10 && x - z < y || !(y %% z)");
    printf("    \n");
    printf("For Example we will use x,y and z values as 2,4,and 6 repectively.\n");
    printf("   \n");
    printf("Now evaluate && condition ((x+y*z > 10) && (x-z < y))");
    printf("   \n");
    printf("First calculate this part of expression:- (x+y*z > 10) ");
    printf("  \n");
    printf("First multiply y with z, then add result with x \n");
    printf("%d * %d = %d \n",y,z,multiplication);
    printf("add x to the result so %d + %d = %d",x,multiplication,addition);
    printf(" \n");
    printf("Now compare  %d with 10\n",addition);
    printf(" \n");
    printf("if %d is greater than 10 than expression turns out to be 1.\n",addition);
    printf("   \n");
    printf("Now lets evaluate this part x - z < y \n");
    printf("   \n");
    printf("First minus z from x so %d - %d = %d\n",x,z,subtraction);
    printf(" \n");
    printf("Now compare %d with %d \n",y,subtraction);
    printf("  \n");
    printf("Now compare the two expressions.(x+y*z > 10) && (x-z < y)\n");
    printf("Both expression gives us 1 so 1 && 1 gives us 1\n");
    printf("Now calculate this expression:-!(y %% z)\n");
    printf("so y mod z gives us 0.\n");
    printf(" \n");
    printf("But ! (not operator) gives us 1.\n");
    printf("  \n");
    printf("Now we have to conclude OR (|) operator.\n");
    printf(" \n");
    printf("So 1 || 1 gives us 1\n");
    printf("So our final result is 1\n");
    printf("  \n");
    printf("So this is how operator precedence works.\n");

    return 0;


}