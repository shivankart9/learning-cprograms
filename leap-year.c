//this program is for whether a year is leap year or not
#include<stdio.h>
int main()
{
    int year;
    printf("enter a year: ");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("the entered year is a leap year");
    }
    else
    {
        printf("enterd year is not a leap year");
    }
    return 0;
}