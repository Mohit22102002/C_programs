#include<stdio.h>
main()
{
 int i=0,count=0,n;	
 printf("Enter your size of string:");
 scanf("%d",&n);
 char a[n],c;
 printf("Enter your string:");
 scanf("%s",a);
 printf("Your entered string is %s:",a);
 printf("\nEnter the character to be counted:");
 scanf("%s",&c);
 while(a[i]!=0)
 {
 if(a[i]==c)
 {
 count=count+1;
 i=i+1;	
 }
 else
 {
 if(a[i]!=0)
 {
 i=i+1;	
 continue;	
 }
 else
 {
 printf("Your entered character does appear in string.");	
 }	
 }
}
 printf("%c occurs %d times in your entered string",c,count);	
}
