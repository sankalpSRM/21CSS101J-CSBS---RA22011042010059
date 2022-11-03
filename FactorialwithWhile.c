#include<stdio.h>
int main() 
{
    
    int n;
    int factorial = 1;
    int i = 1;
    printf("RA2211042010059)"
    printf("Enter integer: ");
    scanf("%d", &n);
    printf("The entered Integer is: ");
    while(i<=n) 
    {
        factorial *= i;
        i++;
    }
    printf("The factorial of the Integer %d = %d", n , factorial);
}
