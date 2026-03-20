// this program prints the both reverse and  normal counting using upto 10 using do while
#include<stdio.h>
int main() {
    int i=1;
    int j=10;
     printf("from 1 to 10\n");
    do
    
    {
       
        printf("%d",i);
        i++;
    }
    while(i<=10);
    printf("\nfrom 10 to 1\n");
    do
    {
    
        printf("%d",j);
        j--;
        
    }
    while(j>=0);
    return 0;
}
