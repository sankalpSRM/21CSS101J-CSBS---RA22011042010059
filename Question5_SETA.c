#include <stdio.h>

int main()
{
    printf("RA2211042010059");
    int n,x,y;
    printf("Enter N,X,Y : ");
    scanf("%d %d %d",&n,&x,&y);
    if(y%x==0&&y<=(n*x))
    {
    printf("YES");
    }
    else
    {
    printf("NO");
    }
}
