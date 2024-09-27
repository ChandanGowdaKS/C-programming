#include<stdio.h>
int main()
{
    int age;
    char response;
    printf("Hi, Please enter Your Age is Check Whether You Are Eligible For Voting!!!");
    scanf("%d",&age);
    if (age < 18)
    {        
        printf("Sorry You Are Not Eligible For Voting Please Go and Play Chess");
    }
    else if (age >= 18)
    {
        printf("Do You Have Voter ID, PLease Confirm By Pressing Yes For 'y' & No For 'n'");
        scanf("%s",&response);
        if  (response == 'y')
           {
            printf("Hoo Can Vote");
        }
        else if (response == 'n')
            {
            printf("Apply For Voter ID");

        }
        else{
            printf("Invalid Input");
        }
    } 

    return 0;

}