#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char ch='A';
	do
	{
		cout<<ch<<"\t";
		ch++;
	}while(ch<='Z');
	getch();
}