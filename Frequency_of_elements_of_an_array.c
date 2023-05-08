#include<stdio.h>
main()
{
 int i,j,n,a,count;
 printf("Enter the size of required array:");
 scanf("%d",&n);
 int array[n],freq[n];
 printf("Enter %d elements for your array:\n");
 for(i=0;i<n;i=i+1)
 {
 scanf("%d",&array[i]);
 freq[i]=-1;	
 }
 printf("Elements of array are:\n");
 for(i=0;i<n;i=i+1)
 {
 printf("%d ",array[i]);	
 }
 for(i=0;i<n;i=i+1)
 {
 count=1;
 for(j=j+1;j<n;j=j+1)
 {
 if(array[i]==array[j])
 {
 count=count+1;
 freq[j]=0;	
 }
 }
 if(freq[i] != 0)
 {
 freq[i]=count;	
 }
 }
  printf("\nFrequency of all elements of array:\n");
  for(i=0;i<n;i=i+1)
  {
  if(freq[i]!=0)
  {
 printf("%d occurs %d times",array[i],freq[i]);  	
 }	
 }	
}
