#include <stdio.h>

int main()
{
    printf("RA2211042010059");
    int N,M,K;
    printf("Enter K : ");
    scanf("%d", &K);
    printf("Enter M : ");
    scanf("%d", &M);
    printf("Enter N : ");
    scanf("%d", &N);
    if (N+K <= M) {
        printf("Yes\n");
    }
    else if (N+K >= M) {
        printf("No\n");  
    
    }
}
