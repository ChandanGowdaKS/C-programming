#include<stdio.h>
int choice,num1,num2;
int main(){
    printf("Enter 1 to Add  the numbers\n");
    printf("Enter 2 to sub  the numbers\n");
    printf("Enter 3 to mul  the numbers\n");
    printf("Enter 4 to div  the numbers\n");
    scanf("%d",&choice);
    printf("Enter the two numbers to do Arthemetic operations:\n");
    scanf("%d %d",&num1,&num2);

    switch (choice)
    {
    case 1:
    printf("The Addition of Two numbers is %d",num1+num2);
        break;
    case 2:
    printf("The Subtraction of Two numbers is %d",num1-num2);
        break;
    case 3:
        printf("The multiplication of Two numbers is %d",num1*num2);
        break;
    case 4:
        printf("The division of Two numbers is %d",num1/num2);
        break;
    default:
        printf("Invalid Choice");
        break;
    }
}