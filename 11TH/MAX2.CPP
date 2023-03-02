//Program to find maxmimum between 2 numbers.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b;
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	if (a>b)
	{
		cout<<"Maximum= "<<a;
	}
	else
	{
		cout<<"Maximum= "<<b;
	}
	getch();
}