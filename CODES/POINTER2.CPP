#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a=5,*p1,**p2;
	p1=&a;
	p2=&p1;
	cout<<"Address of a= "<<&a;   //or<<p1.
	cout<<"\nAddress of p1= "<<p2<<endl;
	cout<<"\nValue of a= "<<*p1;
	cout<<"\nAfter incrementing the address values: ";
	p1+=2;
	cout<<"\nAddress of a= "<<p1;
	p2+=2;
	cout<<"\nAddress of a= "<<p2;
	getch();
}