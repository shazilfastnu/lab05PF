#include<stdio.h>
int main(){
    int marks1;
    int marks2;
    int marks3;
    int highest_marks;
    printf("Please enter marks \n");
    scanf("%d",&marks1);
    scanf("%d",&marks2);
    scanf("%d",&marks3);
    highest_marks = marks1 > marks2 ? (marks1>marks3 ? marks1 :marks3) : (marks2>marks3 ? marks2 : marks3);
    printf("The Highest marks scored are %d",highest_marks);
    return 0;
}