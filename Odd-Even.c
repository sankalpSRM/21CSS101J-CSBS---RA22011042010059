#include <stdio.h>
int main() 
{
    printf("RA2211042010059")
    int number;
    printf("Enter the number you want to check: ");
    scanf("%d", &number);
    if(number % 2 == 0)
        printf("%d is an even number", number);
    else
        printf("%d is a odd number", number);

    return 0;
}
