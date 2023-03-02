//Program to check whether a character is alphabet,digit or special character.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char a;
	cout<<"Enter any character: ";
	cin>>a;
	if((a>='a' && a<='z') || (a >= 'A' && a <= 'Z'))
	{
		cout<<"Entered character is an alphabet.";
	}
	else if(a>='0' && a<='9')
	{
		cout<<"Entered character is a digit.";
	}
	else
	{
		cout<<"Entered character is a special character.";
	}
	getch();
}