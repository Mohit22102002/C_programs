#include<stdio.h>
main()
{
 int n,i=0;
 printf("Enter the size for your string:");
 scanf("%d",&n);
 char a[n],b[n];
 printf("Enter your string:");
 scanf("%s",a);
 printf("\nYour entered string looks like:%s",a);
 while(a[i]!=0)
 {
 b[i]=a[i];
 i=i+1;	
 }
 printf("\nCopied string is %s",b);
}
