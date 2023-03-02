#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=5-i;k++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=i;k++)
		{
			cout<<" ";
		}
		for(j=4;j>=i;j--)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	getch();
}