#include<stdio.h>
int fact(int n);
 int main()
 {
  int a;
  printf("Enter number to find its factorial: ");
  scanf("%d",&a);
  printf("\nThe factorial of %d is %d",a,fact(a));	
 }
int fact(int n)
{
 if(n==1||n==0)
 return 1;
 else
 return n*fact(n-1);
 	
}
 
