#include<stdio.h>
main()
{
 char *array[4]={"SONY","MI","SAMSUMG","PANASONIC"};
 int i;	
 printf("Your array looks like:\n");
 for(i=0;i<4;i=i+1)
 {
 printf("array[%d]=%s\n",i+1,array[i]);	
 }	
}
