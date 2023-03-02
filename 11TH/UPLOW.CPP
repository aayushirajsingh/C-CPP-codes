//Program to check whether a character is upper case or lower case.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char a;
	cout<<"Enter a character: ";
	cin>>a;
	if((a>='a' && a<='z'))
	{
		cout<<"Entered character is lower case.";
	}
	if((a>='A' && a<='Z'))
	{
		cout<<"Entered character is upper case.";
	}
	getch();
}