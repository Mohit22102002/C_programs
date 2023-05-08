#include<stdio.h>
main()
{
 int i,n,N,P;
 printf("Enter the size of original array:");
 scanf("%d",&n);
 int O_array[n];
 printf("Enter the elements of the array:\n");
 for(i=0;i<n;i=i+1)
 {
 scanf("%d",&O_array[i]);
 }
 printf("The elements in original array are:\n");
 for(i=0;i<n;i=i+1)
 {
 printf("%d ",O_array[i]);
 }
 printf("\nEnter the element to be inserted:");
 scanf("%d",&N);
 printf("Enter the position at which array must appear:");
 scanf("%d",&P);
 int I_array[n+1];
 if(P>n+1||P<=0)
 {
 printf("Invalid position\n Please enter position from 0 to %d",n);	
 }
 else
 {
 for(i=n;i>P;i=i-1)
 {
 I_array[i]=O_array[i-1];	
 }
 I_array[P]=N;
 for(i=0;i<P;i=i+1)
 {
 I_array[i]=O_array[i];	
 }
 printf("The elements of new intserted element array are:\n");
 for(i=0;i<n+1;i=i+1)
 {
 printf("%d ",I_array[i]);	
 }	
 }
}
