#include<iostream>
using namespace std;
int main()
{
	int n,i,a[3],sum=0;
	float avg;
	cout<<"Enter total number of subjects:";
	cin>>n;
	cout<<"Enter marks out of 10 for each subject";
	for(i=0;i<n;i=i+1)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i=i+1)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
	if(avg>=9.5)
	cout<<"A";
	else
	if(avg>=9&&avg<9.5)
	cout<<"B";
	else
	if(avg>=8.5&&avg<9)
	cout<<"C";
	else
	if(avg>=7.5&&avg<8.5)
	cout<<"D";
	else
	if(avg>=5.5&&avg<6.5)
	cout<<"E";
	else
	cout<<"Fail!!!";
	return 0;
}
