#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,k;
	for(i=1;i<=16;i++)
	{
		for(k=1;k<=16-i;k++)
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
		for(k=6;k<=15+i;k++)
		{
			cout<<" ";
		}
		for(j=5;j>=i;j--)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	getch();
}

