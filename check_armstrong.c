#include<stdio.h>
#include<conio.h>
int main()
{
    printf("RA2211042010059");
    int n, nu, num=0, rem;
    printf("Enter any positive number: ");
    scanf("%d", &n);
    nu=n;
    while(nu!=0)
    {
        rem = nu%10;
        num = num + (rem*rem*rem);
        nu = nu/10;
    }
    if(num==n)
        printf("\nIt's an Armstrong Number");
    else
        printf("\nIt's not an Armstrong Number");
    getch();
    return 0;
}
