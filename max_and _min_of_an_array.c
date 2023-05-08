#include<stdio.h>
main()
{
 int i,n,max,min;
 printf("Enter the size of array:");
 scanf("%d",&n);
 int array[n];
 printf("Enter %d elements of the array:",n);
 for(i=0;i<n;i=i+1)
 {
 scanf("%d",&array[i]);	
 }
 max=array[0]; //assume the first elemnt to be max and min.
 min=array[0];
 for(i=0;i<n;i=i+1)
 {
 if(array[i]>max)
 {
 max=array[i];	
 }

 if(array[i]<min)
 {
 min=array[i];	
 }	
 }
 printf("The max element of the array is %d\n",max);
 printf("The minimum element of the array is %d",min); 	
}
