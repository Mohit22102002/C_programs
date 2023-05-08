#include<stdio.h>
void Push(int stack[],int a,int n);
void Pop(int stack[]);
void Peek(int stack[]);
void Display(int stack[]);
int TOP=-1;
int main()
{
 int n,op,add;
 printf("Enter size for your stack:");
 scanf("%d",&n);
 int stack[n];
 do
 {
 printf("\nEnter the operation to perform:\n1)PUSH\n2)POP\n3)PEEK\n4)DISPLAY\n5)EXIT\n");
 printf("Operation:");
 scanf("%d",&op);
 switch(op)
 {
 case 1:
 printf("Enter element to add:");
 scanf("%d",&add);	
 Push(stack,add,n);
 break;
 case 2:
 Pop(stack);	
 break;
 case 3:
 Peek(stack);
 break;
 case 4:
 Display(stack);	
 break;
 default:
 printf("Invalid choice!!!");	
 }	
 }
 while(op!=(-5));
}
void Push(int stack[],int a,int n)
{
if(TOP==(n-1))
printf("Stack is full!!!!!!");
else
{
TOP=TOP+1;
stack[TOP]=a;
printf("*********%d added successfully**********",a);
}
}
void Pop(int stack[])
{
if(TOP==(-1))
printf("Stack is already empty!!!!!!");
else
{
 printf("****%d was deleted*****",stack[TOP]);	
TOP=TOP-1;	
}	
}
void Peek(int stack[])
{
printf("*****Element at highest index i.e %d is %d****",TOP,stack[TOP]);	
}
void Display(int stack[])
{
int i;
if(TOP==-1)
printf("Stack is already empty!!!!!!");
else
{	
printf("Elements present in stack are:\n");
for(i=TOP;i>=0;i=i-1)
{
printf("%d  ",stack[i]);	
}	
}
}
	

