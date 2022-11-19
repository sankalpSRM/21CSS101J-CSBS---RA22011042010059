#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    printf("RA2211042010059");
    char str[100], ch, count=0, len, i, j, temp;
    printf("Enter any string: ");
    gets(str);
    len = strlen(str);
    for(i=0; i<len; i++)
    {
        if(str[i]==32 && str[i+1]==32)
        {
            temp = i;
            for(j=i; j<(len-1); j++)
            {
                str[j] = str[j+1];
            }
            len--;
            str[len]='\0';
            i = 0;
        }
    }
    printf("The new string after removing all extra spaces:\n");
    puts(str);
    getch();
    return 0;
}
