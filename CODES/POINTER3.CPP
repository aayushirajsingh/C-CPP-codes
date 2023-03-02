#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a=10,*p;
	p=&a;
	cout<<"Value of a= "<<a;
	*p=(*p)/2;
	cout<<"\nValue of a= "<<*p;
	getch();
}