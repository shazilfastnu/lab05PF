#include<stdio.h>
#include<math.h>
int main(){
    float radius;
    float cicumference;
    float area;
    float square_root;
    printf("Enter radius : ");
    scanf("%f",&radius);
    cicumference = 2 * M_PI * radius;
    area = M_PI * radius * radius;
    square_root = sqrt(radius);
    printf("Area of your circle is : %.2f \n", area);
    printf("Circumference of your circle is : %.2f \n", cicumference);
    printf("Square root of your radius is : %.2f \n", square_root);
    return 0;
}