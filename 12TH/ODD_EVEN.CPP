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
		cout<<"The number is even. ";
	}
	else
	{
		cout<<"The number is odd. ";
	}
	getch();
}