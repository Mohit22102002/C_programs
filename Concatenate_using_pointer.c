#include<stdio.h>
main()
{
 char c1[100],c2[100];
 char *p1,*p2;
 int n,m,i;
 printf("Enter first string: ");
 gets(c1);
 printf("Enter second string: ");
 gets(c2);
 n=strlen(c1);
 for(i=0;i<n;i=i+1)
 {
 p1[i]=&c1[i];	
 }
 m=strlen(c2);
 for(i=0;i<m;i=i+1)
 {
 p2[i]=&c2[i];	
 }
 for(i=0;i<m;i=i+1)
 {
 p1[n+i]=&c2[i];
 }
 p1[n+i]=NULL;
 printf("After concatenating string looks like: ");
 for(i=0;i<m+n;i=i+1)
 {
 printf("%c",p1[i]);	
 }
}
