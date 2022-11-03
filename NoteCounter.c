#include<stdio.h>
int main() 
{
    printf("RA2211042010059");
    int totalamount, note500, note100, note50, note10, note1;
    printf("Enter amount: ");
    scanf("%d", &totalamount);
 
    if(totalamount >= 500)
    {
        note500 = totalamount/500;
        totalamount -= note500 * 500;
    }
    else if(totalamount >= 100)
    {
        note100 = totalamount/100;
        totalamount -= note100 * 100;
    }
    else if(totalamount >= 50)
    {
        note50 = totalamount/50;
        totalamount -= note50 * 50;
    }
    else if(totalamount >= 10)
    {
        note10 = totalamount/10;
        totalamount -= note10 * 10;
    }
    else if(totalamount >= 1)
    {
        note1 = totalamount/1;
        totalamount -= note1 * 1;
    }
    printf("Total number of notes = \n");
    printf("500 = %d\n", note500);
    printf("100 = %d\n", note100);
    printf("50 = %d\n", note50);
    printf("10 = %d\n", note10);
    printf("1 = %d\n", note1);

    return 0;
}

