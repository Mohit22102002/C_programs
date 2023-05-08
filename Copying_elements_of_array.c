#include<stdio.h>
main()
{
 int i,n;
 printf("Enter the size of array:");
 scanf("%d",&n);
 int array[n],source[n] ; 
 for(i=0;i<n;i=i+1)
 {
 scanf("%d",&source[i]);	 
 }
 for(i=0;i<n;i=i+1)
 {
 array[i]=source[i];	
 }
 printf("Enter %d elements for your array:\n",n);
  for(i=0;i<n;i=i+1)
 {
 printf("%d ",array[i]);
 }
 printf("\nThe elements in array_2 are:\n");
 for(i=0;i<n;i=i+1)
 {
 printf("%d ",source[i]);
 }
}
