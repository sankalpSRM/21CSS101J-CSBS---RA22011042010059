#include <stdio.h>

int main()
{
   printf("RA2211042010059");
   int a,b,c;
   printf("Enter the amount of Money Alice,Bob and Charlie are bidding : ");
   scanf("%d %d %d", &a,&b,&c);
    if(a>b&&a>c)
    {
        printf("Alice");
    }
    if(b>a&&b>c)
    {
        printf("Bob");
    }
    if(c>a&&c>b)
    {
        printf("Charlie");
    }
}
