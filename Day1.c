#include <stdio.h>
int main(){
    printf("Hello world");
    return 0;
}


/* Arthematic Operations*/

#include <stdio.h>
int main(void){
    int a,b;
    
    printf("Please Enter Two number to Add,Sub,Mul,Div");
    scanf("%d%d",&a,&b);
    printf("The Addition of two Number is : %d \n",a+b);
    printf("The Subtraction of two Number is : %d \n",a-b);
    printf("The Multiplication of two Number is : %d \n",a*b);
    printf("The Division of two Number is : %d \n",a/b);

    return 0;
}

//  Swaping Numbers

#include <stdio.h>
int main(){
    int num1,num2,temp;
    printf("Enter Two Number to Swap That Numbers:");
    scanf("%d%d",&num1,&num2);
    printf("Before Swaping the num1 is %d and num2 %d \n",num1,num2);
    temp = num1;
    num1 = num2;
    num2 = temp; 
    
    printf("After Swaping: The num1 is %d and The Num2 is %d ",num1,num2);



    return 0 ;
}