//Program to check whether a number is divisible by 5 & 11 or not.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a;
	cout<<"Enter a number: ";
	cin>>a;
	if(a%5==0 && a%11==0)
	{
		cout<<a<<" is divisible by 5 & 11.";
	}
	else
	{
		cout<<a<<" is not divisible by 5 & 11.";
	}
	getch();
}