#include<stdio.h>
int main()
{
 int a,*p;
 printf("Enter a value:");
 scanf("%d",&a);
 printf("Your entered value is %d and its address is %d",a,&a);
 p=&a;
 printf("\nEnter new value:");
 scanf("%d",&*p);
 printf("Your entered value is %d and its address is %d",*p,p);
 return 0;
}
