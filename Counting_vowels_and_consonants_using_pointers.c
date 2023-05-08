#include<stdio.h>
main()
{
 char a[1000];
 char *p;
 int count1=0,count2=0;
 printf("Enter your string:\n");
 scanf("%s",a);
 p=a;
 while(*p!='\0')
 {
 if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
 {
 count1=count1+1;	
 }
 elsen
 {
 count2=count2+1;	
 }
 p=p+1;	
 }
 printf("\nTotal vowels in string are %d\n",count1);
 printf("Total consontants in the string are %d",count2);	
}
