#include<stdio.h>
main()
{
 int Low[10][10];
 int a,i,j,r,co,index=0,Row_1=0;
 int c[100],k=0;
 printf("Enter no. of rows and columns:");
 scanf("%d",&a);
 printf("Enter %d elements for your lower triangular matrix:\n",a*a);
 for(i=0;i<a;i=i+1)
 {
 for(j=0;j<a;j=j+1)	
 {
 scanf("%d",&Low[i][j]);	
 }
 }
 printf("Your entered matrix looks like:");
 for(i=0;i<a;i=i+1)
 {
 for(j=0;j<a;j=j+1)	
 {
 printf("%d ",Low[i][j]);	
 }
 printf("\n");
 }
 for(i=0;i<a;i=i+1)
 {
 for(j=0;j<a;j=j+1)
 {
 if(i==j)
 {
 c[k]=Low[i][j];
 k++;
 break;	
 }
 else
 {
 c[k]=Low[i][j];
 k++;	
 }	
 }
 }
 printf("\nElements in the array excluding non-zero are: \n");
 for(i=0;i<k;i=i+1)
 {
 printf("%d ",c[i]);	
 }
 printf("\nEnter location of the element to be searched:");
 printf("\nRow:");
 scanf("%d",&r);
 printf("Column:");
 scanf("%d",&co); 
 Row_1=r+1;
 if(Row_1==1)
 {
 index=1;	
 }
 else
 {
 do
 {
 index=index+Row_1;
 Row_1=Row_1-1;	
 }
 while(Row_1!=0);
 }
 index=index-(r-co);
 printf("The element is %d and index %d",c[index-1],index-1);
 }
