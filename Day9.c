// #include<stdio.h>
// void main(){
// int arr1[5],arr2[5],summ[5];

// int i;
// for (int i=0; i < 5; i++)
// {
//     printf("Enter the number :");
//     scanf("%d",&arr1[i]);
// }
 
// for (i=0; i < 5; i++)
// {
//     printf("Enter the number :");
//     scanf("%d",&arr2[i]);
// }

// for ( i = 0; i < 5; i++)
// {
//     summ[i] = arr1[i]+arr2[i];
//     printf("%d\n",summ[i]);
// }


// }


// #include<stdio.h>

// int a[2][2],i,j,summing[2],adder[2];

// void main(){
//     for ( i = 0; i < 2; i++)
//     {
//         for ( j = 0; j < 2; j++)
//         {
//             printf("Enter The number :\n");
//             scanf("%d",&a[i][j]);
//         }    
//     }
//     for ( i = 0; i < 2; i++)
//     {
//         adder[i] = a[i][j];
//         // printf("%d",adder[i]);
//     }
//     summing[0] += adder[0];
//     printf("%d",summing[0]);
// }

// #include<stdio.h>
// #include<string.h>

// char name[] = "c",end_name[] = "Chandangow",empty[] = "";
// int a,b,i;
// void main(){
//     a = strlen(name);
//     b = strlen(end_name);
//     int empty = strlen(empty);
//     for ( i = a; i < b*b+1; i++)
//     {
//         printf("%d\n",i);
//     }
    
// }

// #include<stdio.h>

// int cha = 10;
// int *chess = &cha;

// void main(){
//     printf("%d\n",cha);
//     printf("%p",chess);
// }


#include<stdio.h>

int cha = 10;

// void sum(){
//     int a = 10,b = 20,chess=0;
//     chess = a+b; 
//     printf("%d",chess);
// }

int sum(){
    int a = 10, b=20, tot = 0;
    tot = a+b;
    // printf("%d",tot);
    return tot;
}

void main(){
    printf("Hi\n");
    printf("%d",sum());
}