#include<stdio.h>
int main(){
    int user_input;

    printf("Welcome to Multiple Tables Maker !!!\n Please enter the Number to get Tables Of it.\n");
    scanf("%d",&user_input);
    
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n",user_input,i,i * user_input );   
    }
return 0;   
}