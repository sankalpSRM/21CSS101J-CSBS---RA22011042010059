#include<stdio.h>
#include<string.h>
int main()
{
    printf("RA2211042010059");
    char str[20];
    int len;
    printf("Enter the string: ");
    gets(str);
    len = strlen(str);
    printf("\nLength of the string = %d", len);
    getch();
    return 0;
}
