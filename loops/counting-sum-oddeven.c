// this program prints the counting as well as the sum of odd and even numbers seprately using do while loop
#include <stdio.h>
int main() {
    int i=1,sum1=0,sum2=0;
    do 
    {
        printf("\n%d",i);
        if(i%2==0)
        sum1+=i;
        else
        sum2+=i;
        i++;
    }
    while(i<=10);
    printf("\nthe sum of even number: %d",sum1);
    printf("\nthe sum of odd number : %d",sum2);
    return 0;
}
