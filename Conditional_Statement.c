#include<stdio.h>
main()
{
 float M1,M2,M3,average,percentage;
 printf("Enter the marks you scored in below three subjects:\n");
 printf("M1=");
 scanf("%f",&M1);
 printf("M2=");
 scanf("%f",&M2);
 printf("M3=");
 scanf("%f",&M3);
 average=(M1+M2+M3)/3;
 printf("average marks scored=%f\n",average);
 percentage=average;
 printf("You scored %f percent\n",percentage);
 if(percentage>=80?printf("GradeA"):(percentage>=60?printf("GradeB"):(percentage>=40?printf("GradeC"):(percentage<40?printf("Sorry u failed the exam"):printf("Thank you")))));
}	

