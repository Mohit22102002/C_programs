#include<stdio.h>
main()
{
 int a,b,max;
 printf("Enter two numbers:\n1.");
 scanf("%d",&a);
 printf("2.");
 scanf("%d",&b);
 max=(a>b)?a:b;
 while(a!=0||b!=0)
      {
      if(max%a==0 && max%b==0)
	  {
	  printf("The LCM of %d and %d is %d",a,b,max);	
	  break;
	  }	
	  max=max+1;
      }
return 0;
}
	  
 
