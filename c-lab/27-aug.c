#include<stdio.h>
int main() {
    int a,b,c;

    printf("enter first number : ");
    scanf("%d",&a);

    printf("enter the second nuumber : ");
    scanf("%d",&b);

    printf("enter the third number : ");
    scanf("%d",&c);

    int sum,avg;

    sum = a+b+c;

    printf("the sum is : %d",sum);

    avg = sum/3;

    printf("\n the avg is : %d\n",avg);

    return 0;


}