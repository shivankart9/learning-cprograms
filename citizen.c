//if else program for whther a person is child,major,senior citizen
#include<stdio.h>
int main()
{
    int age;
    printf("enter your age : ");
    scanf("%d",&age);
    if(age<=18)
    {
        printf("minor");
    }
    else if(age>18&&age<60)
    {
        printf("major");
    }
    else
    {
        printf("senior citizen");
    }
    return 0;
}