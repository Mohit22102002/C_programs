#include<stdio.h>
main()
{
 int i,j=0,x,y;	
 char a[1000],b[1000],c[1000];
 printf("Enter your first string:");
 scanf("%s",a);
 printf("Enter your second string:");
 scanf("%s",b);
 x=strlen(a);
 y=strlen(b);
 for(i=0;i<x;i=i+1)
 {
 c[i]=a[i];	
 }
 for(i=x;i<x+y;i=i+1)
 {
 c[i]=b[j];
 j=j+1;
 }
 c[x+y]='\0';
 printf("Your concatenated string of a and b is: %s",c);
}
