#include<stdio.h>
main()
{
 int unit=0;
 float charge;
 printf("Enter total unit charge:");
 scanf("%d",&unit);
 if(unit>0 && unit<=50)	
 {
 charge=unit*0.5;	
 }
 else 
 if(unit>50 && unit<=150)
 {
 charge=50*0.5+(unit-50)*0.75;	
 }
 else
 if(unit>150 && unit<=250)
 {
 charge=50*0.5+100*0.75+(unit-150)*1.2;	
 }
 else
 if(unit>250)
 {
 charge=50*0.5+100*0.75+100*1.2+(unit-250)*1.5;	
 }
 
 printf("The bill for your electricity for %d unit charge consumption is %f",unit,1.2*charge);

}

