#include<stdio.h>
main()
{
 int a;
 printf("Enter a number:");
 scanf("%d",&a);
 (a%2==0?printf("%d is even",a):printf("%d is odd",a));	
}
