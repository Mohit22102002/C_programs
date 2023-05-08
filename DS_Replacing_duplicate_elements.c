#include<stdio.h>
int main()
{
int a[100],n,i,j,count=0,Temp;
printf("Enter size for your array:");
scanf("%d",&n);
printf("Enter %d elements for your array:\n",n);
for(i=0;i<n;i=i+1)
scanf("%d",&a[i]);
printf("Your entered array looks like:\n");
for(i=0;i<n;i=i+1)
printf("%d  ",a[i]);
for(i=0;i<n-1;i=i+1)
{
Temp=0;	
for(j=i+1;j<n;j=j+1)
{
if((a[i]==a[j])&&(a[i]!=-1))
{	
a[j]=-1;
Temp=1;
}
}
if(Temp==1)
{
count=count+1;
}
}	
printf("\nAfter replacing your array looks like: ");
for(i=0;i<n;i=i+1)
printf("%d ",a[i]);
printf("\nTotal duplicate elements present in array were :%d",count);
return 0;
}
