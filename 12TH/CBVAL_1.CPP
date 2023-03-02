#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b;
	void swap(int,int);
	cout<<"Enter value of a: ";
	cin>> a;
	cout<<"Enter value of b: ";
	cin>> b;
	swap(a,b);
	getch();
}
void swap(int x,int y)
{
	int z;
	z=x;
	x=y;
	y=z;
	cout<<"After swaping: \na= "<<x<<"\nb= "<<y;
}