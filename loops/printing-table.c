// this  program print the table using for  loop
#include<stdio.h>
int main() {
    int a,i;
    printf("enter which table you want: ");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    printf("\n %d x %d = %d",a, i,i*a);
    return 0;
}
