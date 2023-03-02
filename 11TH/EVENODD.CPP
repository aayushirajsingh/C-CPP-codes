//Program to check whether a number even or odd.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a;
	cout<<"Enter a number: ";
	cin>>a;
	if(a%2==0)
	{
		cout<<"Entered number is even.";
	}
	else
	{
		cout<<"Entered number is odd.";
	}
	getch();
}