#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a=0;
	start:
	cout<<++a<<"\t";
	if (a<50) goto start;
	cout<<"After goto statement.";
	getch();
}