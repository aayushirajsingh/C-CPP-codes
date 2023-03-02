#include<iostream.h>
#include<conio.h>
typedef void (*funptr)(int,int);
void add(int i,int j)
{
	cout<<i<<"+"<<j<<"="<<i+j;
}
void sub(int i,int j)
{
	cout<<i<<"-"<<j<<"="<<i-j;
}
void main()
{
	clrscr();
	funptr ptr;
	ptr=&add;
	ptr(1,2);
	cout<<endl;
	ptr=&sub;
	ptr(3,2);
	getch();
}