#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,sum=0,temp,mul=1;
	cout<<"Enter any number:";
	cin>>n;

	while(n>0)
	{
		sum=sum+n%10;
		mul=mul*n%10;
		n=n/10;
	}
	if(sum==mul)
	{
		cout<<"Perfect number.";
	}
	else
	{
		cout<<"Not an Perfect number.";
	}
	getch();
}