#include <stdio.h>

int main()
{
   printf("RA2211042010059");
   int p1,p2,p3,p4;
   printf("Enter number of problems 1st week,2nd week,3rd week, 4th week : ");
   scanf("%d %d %d %d", &p1,&p2,&p3,&p4);
   if (p1>=10 && p2>=10 && p3>=10 && p4>=10) {
       printf("4");
   }
   else if (p1<10 && p2>=10 && p3>=10 && p4>=10) {
       printf("3");
   }
   else if (p1>=10 && p2<10 && p3>=10 && p4>=10) {
       printf("3");
   }
   else if (p1>=10 && p2>=10 && p3<10 && p4>=10) {
       printf("3");
   }
   else if (p1>=10 && p2>=10 && p3>=10 && p4<10) {
       printf("3");
   }
   else if (p1<10 && p2<10 && p3>=10 && p4>=10) {
       printf("2");
   }
   else if (p1>=10 && p2<10 && p3<10 && p4>=10) {
       printf("2");
   }
   else if (p1>=10 && p2>=10 && p3<10 && p4<10) {
       printf("2");
   }
   else if (p1<10 && p2>=10 && p3<10 && p4>=10) {
       printf("2");
   }
   else if (p1<10 && p2>=10 && p3>=10 && p4<10) {
       printf("2");
   }
    else if (p1>=10 && p2<10 && p3>=10 && p4<10) {
       printf("2");
   }
   else if (p1>=10 && p2>=10 && p3<10 && p4<10) {
       printf("2");
   }
   else {
       printf("1");
   }
}
