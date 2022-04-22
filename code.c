#include<stdio.h>
int main()
{
    int a,b,c;
   printf("Enter first numbers: ");
   scanf("%i",&a);
   printf("Enter second numbers: ");
   scanf("%i",&b);
   printf("Enter third numbers: ");
   scanf("%i",&c);
   if (a>b && a>c)
   printf("%i is the greatest number.",a);
   if (b>a && b>c)
   printf("%i is the greatest number.",b);
   if (c>b && c>a)
   printf("%d is the greatest number.",c);
   return 0;
   }
