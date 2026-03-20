// this program ask user to input number until he enters a negative number using do while 
#include<stdio.h>
int main() {
    int i;
    
    do
    {
    printf("enter the number: ");
    scanf("%d",&i);
    }
    while (i>0);
    return 0;
}
