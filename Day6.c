// Function

#include<stdio.h>

void sum();
void main(){
    sum();
}
void sum(){
    int a,b,sum = 0;
    printf("Please Enter Two Number To Add :");
    scanf("%d %d\n",&a,&b);
    sum = a+b;
    printf("%d",sum);
}