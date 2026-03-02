//this code is of if else in which if you are eligible or not
#include <stdio.h>
int main()
{
    int age;
    printf("enter your age:");
    scanf("%d", &age);
    if(age>=18)
    {
        printf("you are eligible");
    }
    else
    {
        printf("you are not eligible");
    }
    return 0;
}