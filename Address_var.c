#include<stdio.h>
#include<conio.h>
int main()
{
    printf("RA2211042010059");
    int num;
    printf("Enter any number to store in \"num\" variable: ");
    scanf("%d", &num);
    printf("\nValue of num = %d", num);
    printf("\nAddress of num = %u", &num);
    getch();
    return 0;
}
