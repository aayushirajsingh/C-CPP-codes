#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,flag=0,digit;
	cout<<"Enter a number: ";
	cin>>n;
	while(n>0)
	{
		digit=n%10;
		if(digit>=8)
		{
			flag=1;
			break;
		}
		n=n/10;
	}
	if(flag==1)
	{
		cout<<"Not Octal.";
	}
	else
	{
		cout<<"Octal.";
	}
	getch();
}