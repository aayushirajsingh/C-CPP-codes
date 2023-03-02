#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,sum=0,temp;
	cout<<"Enter any number:";
	cin>>n;
	temp=n;
	while(n>0)
	{
		sum=sum+(n%10)*(n%10)*(n%10);
		n=n/10;
	}
	if(sum==temp)
	{
		cout<<"Armstrong number.";
	}
	else
	{
		cout<<"Not an Armstrong number.";
	}
	getch();
}