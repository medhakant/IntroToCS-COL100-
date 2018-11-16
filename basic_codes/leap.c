#include<stdio.h>
int main()
{
int year;
printf("Enter year\n");
scanf("%d",&year);
if(1582 < year && year < 10000)
{
   if((year%4)==0 && (year%100)!=0)
   printf("It is a leap year");
   if((year%100)==0 && (year%400)==0)
   printf("It is a leap year");
   if((year%100)==0 && (year%400)!=0)
   printf("It is not a leap year");
   if ((year%4)!=0)
   printf("It is not a leap year");
}
else
printf("It is not in range");
return 0;
}
