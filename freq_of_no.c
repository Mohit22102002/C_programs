#include<stdio.h>
main()
{
 int n,count_0=0,count_1=0,count_2=0,count_3=0,count_4=0,count_5=0,count_6=0,count_7=0,count_8=0,count_9=0;
 printf("Enter any number:");
 scanf("%d",&n);
 while(n!=0)
{
 switch(n%10)
 {
 case 0:
 count_0 += 1;
 n=n/10;
 break;
 case 1:
 count_1 += 1;
 n=n/10;
 break; 
 case 2:
 count_2 += 1;
 n=n/10;
 break; 
 case 3:
 count_3 += 1;
 n=n/10;
 break; 
 case 4:
 count_4 += 1;
 n=n/10;
 break; 
 case 5:
 count_5 += 1;
 n=n/10;
 break; 
 case 6:
 count_6 += 1;
 n=n/10;
 break; 
 case 7:
 count_7 += 1;
 n=n/10;
 break; 
 case 8:
 count_8 += 1;
 n=n/10;
 break;  	
 case 9:
 count_9 += 1;
 n=n/10;
 break; 
 
 }
}
 printf("count_0=\n",count_0);
 printf("count_1=\n",count_1);
 printf("count_2=\n",count_2);
 printf("count_3=\n",count_3);
 printf("count_4=\n",count_4);
 printf("count_5=\n",count_5);
 printf("count_6=\n",count_6);
 printf("count_7=\n",count_7);
 printf("count_8=\n",count_8);
 printf("count_9=\n",count_9);	
}
