#include<stdio.h>
void Rev(int b[],int m);
int main()
{
int a[100],n,i;
printf("Enter the size of yuor array:");
scanf("%d",&n);
printf("Enter %d elements for your array:\n",n);
for(i=0;i<n;i=i+1)
{
scanf("%d",&a[i]);	
}
printf("Your entered array looks like:\n");
for(i=0;i<n;i=i+1)
{
printf("%d ",a[i]);	
}
Rev(a,n);
printf("\nArray after reversing looks like:\n");	
for(i=0;i<n;i=i+1)
{
printf("%d ",a[i]);	
}
return 0;
}
void Rev(int b[],int m)
{
int mid=m/2,Temp,i,p=0;	
for(i=m-1;i>=mid;i=i-1)
{
Temp=b[i];
b[i]=b[p];
b[p]=Temp;
p=p+1;	
}
}
