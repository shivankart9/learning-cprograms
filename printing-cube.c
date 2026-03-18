// this program prints the cube  of number of the entered range using for loop
#include<stdio.h>
int main() {
    int a,b,c,d,e;
    printf("enter the number from where you want cube: ");
    scanf("%d",&a);
    printf("enter the number upto you want cube: ");
    scanf("%d",&b);
    for(c=a;c<=b;c++)
    {
    printf("\nThe cube of %d is: %d ",c,c*c*c);
    printf("\nThe square of %d is: %d ",c,c*c);
    }
    return 0;
}
