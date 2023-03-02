#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,i;
	cout<<"Enter a number: ";
	cin>>n;
	for(i=1;i<=10;i++)
	{
		cout<<endl<<n<<"*"<<i<<"="<<n*i;
	}
	getch();
}