// this program prints the counting as well as the sum of counting upto 10 using do while loop
#include<stdio.h>
int main() {
    int i=1,sum1=0;
    
     printf("from 1 to 10\n");
    do
    
    {
       
        printf("%d\n",i);
        i++;
        sum1+=i;
    }
    while(i<=10);
     
     printf("\n the sum is %d",sum1);
     return 0;
}
