#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a=5;
	int *p;
	p=&a;
	cout<<"a= "<<a;
	(*p)++;
	cout<<"\nAfter *p++, a= "<<a;
	a++;
	cout<<"\nAfter a++, *p= "<<*p;
	getch();
}