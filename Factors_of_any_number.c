#include<stdio.h>
main()
{
 int a,x;
 printf("Enter a number to know its factor:\n");
 scanf("%d",&a);
 printf("Factors of %d is/are:\n",a);
 for(x=1;x<=a;x=x+1)
 {
  if(a%x==0)
  {
  printf("%d\t",x);
  }
 }
}
