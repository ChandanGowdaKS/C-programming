// // : Write a Program to find the Sum of two numbers entered by the user.
// #include<stdio.h>
// #include<math.h>

// int num1,num2,n1,n2,a=0,b=1;

// void sum();
// void sum(num1,num2){
//     printf("%d",num1+num2);
// }

// void main(){
//     printf("Hi Please enter the number To do Addition:\n");
//     scanf("%d\n %d",&n1,&n2);
//     sum(n1,n2);
    
// }

//               OR

#include<stdio.h>
#include<math.h>

int num1,num2,n1,n2,a = 0;

int sum();
int sum(num1,num2){
    printf("%d\n",num1+num2);
    return num1+num2;
}

void main(){
    printf("Hi Please enter the number To do Addition:\n");
    scanf("%d\n %d",&n1,&n2);
    a = sum(n1,n2);
    printf("%d\n",a);
    printf("%d",a+5);
}