#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	void change(int*);
	int orig=10;
	cout<<"The original value is: "<<orig<<endl;
	change(&orig);
	cout<<"Value after change() is over: "<<orig<<endl;
	getch();
}
void change(int *a)
{
	*a=20;
	cout<<"Value of orig in function change() is :"<<*a<<endl;
	return;
}