#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,c;
	cout<<"Enter any 3 numbers: ";
	cin>>a>>b>>c;
	if(a>b)
	{
		if(a>c)
		{
			cout<<"Max number= "<<a;
		}
		else
		{
			cout<<"Max number= "<<c;
		}
	}
	else
	{
		if(b>c)
		{
			cout<<"Max number= "<<b;
		}
		else
		{
			cout<<"Max number= "<<c;
		}
	}
	getch();
}