#include<stdio.h>

int LCM(int,int);

int LCM(int a,int b)
{
 static int multiple=0;	
 multiple=multiple+a;
 if(multiple%a==0&&multiple%b==0)
 {
 return multiple;	
 }	
 else
 {
 return LCM(a,b);
 }
}

int main()
{
 int p,q,ans;
 printf("Enter two numbers to find their LCM :\n");
 scanf("%d %d",&p,&q);
 if(p>q)
 ans=LCM(p,q);
 else
 ans=LCM(q,p);
 printf("LCM of %d and %d is %d",p,q,ans);	
}
