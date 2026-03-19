// this program is for taking out the average and sum of consecutive numbers
#include<stdio.h>
int main() {
    int i,sum=0,avg;
    for(i=1;i<=5;i++)
    {
    printf("\n%d ",i);
    sum+=i;
    avg=sum/5;
    }
    printf("\n the sum is : %d",sum);
    printf("\n the average is: %d",avg);
    return 0;
   
}
