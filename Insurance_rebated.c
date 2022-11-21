#include <stdio.h>

int main()
{
    printf("RA2211042010059");
    int x,y; 
    printf("Enter X and Y: ");
    scanf("%d %d", &x, &y);
    if (x>=y) {
        printf("%d\n", x);
    }
    else if (x<=y) { 
        printf("%d\n", y);
    }
}
