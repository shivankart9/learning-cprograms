// this program the factorial of the number using for loop
#include<stdio.h>
int main() {
    int n,i,f=1;
     printf("enter the factorial: ");
    scanf("%d",&n);
      for(i=1;i<=n;i++)
    f=f*i;  
    printf("the value of factorial is: %d ",f);
    return 0;
    
}
