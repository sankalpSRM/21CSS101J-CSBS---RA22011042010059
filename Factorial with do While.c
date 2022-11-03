#include<stdio.h>
int main() 
{
    int n;
    int i = 1;
    int factorial = 1;
    printf("RA2211042010059");
    printf("Enter integer: ");
    scanf("%d", &n);
    printf("The entered Integer is: ");
    do
    { 
        factorial *=i;
        i++ ;
    } while (i<=n);
    printf("The factorial of the Integer %d = %d", n , factorial);
}
