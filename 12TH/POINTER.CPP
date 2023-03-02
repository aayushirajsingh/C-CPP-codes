#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int *p;
	int a=5;
	p=&a;
	cout<<"Value of A is: "<<a;
	cout<<endl<<"Address of A is: "<<&a;
	cout<<endl<<"Value of *P is: "<<*p;
	cout<<endl<<"Address of *P is: "<<p;
	a++;
	cout<<endl<<"Value of *P is: "<<*p;
	(*p)++;
	cout<<endl<<"Value of A is: "<<a;
	getch();
}