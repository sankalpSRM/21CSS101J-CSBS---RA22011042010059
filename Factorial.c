#include <stdio.h>
int main() {
    printf("RA2211042010059")
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ", n);
    scanf("%d", &n);
    
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}
