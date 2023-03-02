//Program to check whether a year is leap year or not.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a;
	cout<<"Enter a year: ";
	cin>>a;
	if(a%4==0)
	{
		cout<<"Entered year is a leap year.";
	}
	else
	{
		cout<<"Entered year is not a leap year.";
	}
	getch();
}