// this  program is a basic code for calculating a imaginary house  bill
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the privious reading: ");
    scanf("%d",&b);
    printf("enter the present reading: ");
    scanf("%d",&a);
    c=(a-b);
    if (c>100&&c<300)
    {
        d=c*5;
        printf("the total bill amount is: %d",d);
    }
    else if(c<=0)
    {
        printf("wrong entry");
    }
    else if (c<=100)
    {
        d=c*4;
        printf("the total bill amount is: %d",d);
    }
    else if (c>=300)
    {
        d=c*7;
        printf("the total bill amount is: %d",d);
    }
    else
    printf("wrong entry ");
   
    return 0;
}
