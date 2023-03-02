//Program to check whether a number is -ve,+ve or zero.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a;
	cout<<"Enter a value of a: ";
	cin>>a;
	if(a>0)
	{
		cout<<"Entered value is positive.";
	}
	else if(a<0)
	{
		cout<<"Entered value is negative.";
	}
	else
	{
		cout<<"Entered value is zero.";
	}
	getch();
}