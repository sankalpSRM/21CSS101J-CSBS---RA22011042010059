#include<stdio.h>
#include<string.h>
int main(){
   printf("RA2211042010059") 
   char str[25];
   int i;
   printf("Enter the string: ");
   scanf("%s",str);
 
   for(i=0;i<=strlen(str);i++){
      if(str[i]>=65&&str[i]<=90)
         str[i]=str[i]+32;
   }
   printf("\nLower Case String is: %s",str);
   return 0;
}
