//his program is for printing sum of consecutive number using for loop
#include<stdio.h>
int main() {
    int i,sum=0;
    for(i=1;i<=5;i++)
    {
    printf("\n%d ",i);
    sum+=i;
    }
    printf("\n the sum is : %d",sum);
    
    return 0;
   
}
