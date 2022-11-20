#include <stdio.h>
int sumoftwonumbers (int a, int b)
{
    printf("I am entering the function %d %d\n", a,b);
    int sum;
    sum = a+b;
    return sum;
}
int main()
{
    printf("RA2211042010059");
    int x , y , sum;
    scanf("%d %d", &x, &y);
    printf("%d %d\n", x,y);
    sum = sumoftwonumbers(x,y);
    printf("%d\n", sum);
}

    
