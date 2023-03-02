//Program to swap to numbers.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,c;
	cout<<"Enter value of a: ";
	cin>> a;
	cout<<"Enter value of b: ";
	cin>> b;
	c=a;
	a=b;
	b=c;
	cout<<"After swaping: \na= "<<a<<"\nb= "<<b;
	getch();
}