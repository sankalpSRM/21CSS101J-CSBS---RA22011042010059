#include <stdio.h>

int main()
{
    printf("RA2211042010059\n");
    int n;
    printf("Enter N : ");
    scanf("%d",&n);
    for(int i=7;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            printf("%d\t",i);
        }
        printf("\n\n");
    }
}
