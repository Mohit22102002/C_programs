#include<stdio.h>
int prime(int n);
main()
{
 int i,n,prime;
 printf("Enter any number to check if it is prime:");
 scanf("%d",&n);
 prime=prime(n);
 printf("%d is prime",n);	
}
int prime(int n)
{
 for(i=1;i<=n;i=i+1)
 {
 if(n%1==0&&n%n==0)
 {
 return prime;	
 }
 else
 {
 return 0;	
 }	
 } 	
}

