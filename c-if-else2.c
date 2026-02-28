/*entering 2 numbers in this program and then it will tell which is greater number*/
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
    if(num1>num2)
    {
        printf("first number is  grater");
    }
    else if(num2>num1)
    {
        printf("second number is  greater");
    }
    else
    {
        printf("both numbers are equal");
    }
    return 0;
}