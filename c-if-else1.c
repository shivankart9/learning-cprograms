/* this program is about whether a number is positive or negative*/
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num>0)
    {
        printf("the number is  positve");
    }
    else if(num<0)
    {
        printf("the number is negative");
    }
    else
    {
        printf("the number is zero");
    }
    return 0;
}