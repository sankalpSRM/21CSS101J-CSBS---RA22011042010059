#include<stdio.h>   
int sum[3][3];    
void sumofarray (int f[3][3],int s[3][3])
{
    int d,c;
     for (c = 0; c < 3; c++) 
    {
        for (d = 0 ; d < 3; d++) 
        {
            sum[c][d] = f[c][d] + s[c][d];
            printf("%d\t", sum[c][d]);
        }
  
    }
}
int main() 
{
    int m, n, c, d, first[3][3], second[3][3]; 
 
    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of first matrix\n");
    for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);
    printf("Enter the elements of second matrix\n"); 
    for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &second[c][d]); 
    printf("Sum of entered matrices:-\n");  
    sumofarray(first, second);
    printf("%d", sum);
    /*for (c = 0; c < m; c++) {
        for (d = 0 ; d < n; d++) {
            sum[c][d] = first[c][d] + second[c][d];
            printf("%d\t", sum[c][d]);
        } */
    printf("\n");
    return 0;
}
