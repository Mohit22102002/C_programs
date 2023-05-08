#include<stdio.h>
int HCF(int n,int m);
int main()
{
 int a,b;
 printf("Enter two number to find their HCF:\n");
 scanf("%d%d",&a,&b);
 printf("\nHCF of %d and %d is %d",a,b,HCF(a,b));
 return 0;
}
int HCF(int n,int m)
{	
 if(m==0)
 return n;
 else
 return HCF(m,n%m);	
}
