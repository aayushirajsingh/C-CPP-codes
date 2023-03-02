#include<iostream.h>
#include<conio.h>
void main()
{
	int a=10,*p;
	clrscr();
	p=&a;
	cout<<"\nValue of a= "<<a;
	cout<<"\nAddress of a= "<<&a;
	cout<<"\nValue of pointer p(address of a)= "<<p;
	cout<<"\nValue of a(using pointer)= "<<*p;
	getch();
}