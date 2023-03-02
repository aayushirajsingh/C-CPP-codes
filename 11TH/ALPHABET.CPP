//Program to check whether a character is alphabet or not.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char a;
	cout<<"Enter a character: ";
	cin>>a;
	if((a>='a' && a<='z') || (a>='A' && a<='Z'))
	{
		cout<<"Entered value is an alphabet.";
	}
	else
	{
		cout<<"Entered value is not an alphabet.";
	}
	getch();
}