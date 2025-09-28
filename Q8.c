#include<stdio.h>
int main(){
    int section;
    int quantity;
    int size;
    int type;
    float cost = 0;
    float Subtotal =0;
    float discount =0;
    float TotalBill =0;
    int offer;
    
    printf("\t\t\t Welcome to our Restaurant!\t\t\t\n");
    printf("1.Coffee Shop\n");
    printf("2.Burger Hub\n");
    printf("3.Ice cream Parlour\n");
    printf("Please choose any section : ");
    scanf("%d",&section);
    
    switch(section)
    {
        case 1 :
            printf("\t\t\tCoffee shop menu\t\t\t \n");
            printf("Choose Coffee Size:\n");
            printf("1. Small = Rs.200 \n");
            printf("2. Medium = Rs.300 \n");
            printf("3. Large = Rs.400 \n");
            printf("Enter your choice : ");
            scanf("%d",&size);
            
            switch(size){
                case 1: cost = 200;
                break;
                case 2: cost = 300;
                break;
                case 3: cost = 400;
                break;
                default:
                    printf("Invalid size entered!\n");
                    return 0;
            }
            
            printf("Choose coffee type : \n");
            printf("1.Regular (NO EXTRA CHARGES)\n");
            printf("2.Cappucino (+Rs.100)\n");
            printf("3.Latte (+Rs.200)\n");
            printf("Enter Coffe type (1-3) : ");
            scanf("%d",&type);
            
            switch(type)
            {
                case 1:
                break;
        
                case 2:
                cost = cost + 100;
                break;

                case 3:
                cost = cost + 200;
                break;

                default:
                printf("Wrong type entered.\n");
                return 0;
            }
            
            printf("Enter number of coffees: ");
            scanf("%d",&quantity);
        
            if (quantity > 1 && quantity < 5)
            {
                printf("\t\t\t\tCheck our Combo offers\t\t\t\n");
                printf("\t1.Order 2 cups and get (10%%) discount.\t\t\n");
                printf("\t2.Order 3 cups and get (15%%) discount.\t\t\n");
                printf("\t3.Order 4 cups and get (20%%) discount.\t\t\n");
                printf("\t4.Order 5 cups and get (25%%) discount.\t\t\n");
                printf("Choose offer (1-4): ");
                scanf("%d",&offer);
                
                switch(offer)
                {
                    case 1:
                        quantity = 2;
                        printf("Thankyou for choosing offer 1.\n");
                        Subtotal = quantity * cost;
                        discount = Subtotal * 0.10;
                        TotalBill = Subtotal - discount;
                    break;
                    
                    case 2:
                        quantity = 3;
                        printf("Thankyou for choosing offer 2.\n");
                        Subtotal = quantity * cost;
                        discount = Subtotal * 0.15;
                        TotalBill = Subtotal - discount;
                    break;  
                        
                    case 3:
                        quantity = 4;
                        printf("Thankyou for choosing offer 3.\n");
                        Subtotal = quantity * cost;
                        discount = Subtotal * 0.20;
                        TotalBill = Subtotal - discount;
                    break; 
                       
                    case 4:
                        quantity = 5;
                        printf("Thankyou for choosing offer 4.\n");
                        Subtotal = quantity * cost;
                        discount = Subtotal * 0.25;
                        TotalBill = Subtotal - discount;
                    break;
                    
                    default:
                        printf("Invalid offer number entered.\n");
                    break;
                }
            }
            else if (quantity>=5)
            {
                printf("Your order is huge, you will 30 percent discout!");
                Subtotal = quantity * cost;
                discount = Subtotal * 0.30;
                TotalBill = Subtotal - discount;
            }
            else if (quantity = 1)
            {
                printf("No discount available.\n");
                Subtotal = cost;
                TotalBill = Subtotal;
            }
        break;
        case 2 :
            printf("Your order will be handled by Burger Hub section.");
        return 0;
        
        case 3:
            printf("Your order will be handled by Ice Cream Parlour section");
        return 0;

        default:
            printf("Wrong section entered.\n");
        return 0;
    }

    printf("Subtotal = %.3f \n",Subtotal);
    printf("Discount = %.3f \n",discount);
    printf("Total amount after discount = %.3f \n",TotalBill);

    return 0;
}