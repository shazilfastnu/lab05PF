#include<stdio.h>
int main (){
    int time = 22*60;//I have converted set time to minutes so we can check condition in minutes format.
    char signal;
    int usertime;
    int HH;
    int MM;
    int condition;
    printf("Enter Traffic Signal.(R/Y/G) : ");
    scanf(" %c",&signal);
    switch (signal)
    {
    case 'R':
      printf("Enter time in 24 hour format (HH/MM) using (:)  : ");
      scanf("%d:%d", &HH,&MM);
      usertime = HH*60 +MM; // Mam this calculates user time in minutes so that its easy to compare.
      condition = (usertime < time) ? 1:2 ;
        switch (condition)
        {
        case 1:
            printf("Stop and wait.");
        break;
        
        case 2:
            printf("Stop, but night caution allowed.");
        break;
        }
    break;
    
    case 'Y' :
        printf("Get Ready.");
    break;
    
    case 'G' :
        printf("Go.");
    break;

    default:
        printf("Invalid Signal.");
        break;
    }
    return 0;
}