#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[2][2],b[2][2],c[2][2],i,j;
	cout<<"Enter the elements of matrix A: \n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter the elements of matrix B: \n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>b[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"sum of elements of A and B: ";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<endl<<c[i][j];
		}
	}

	getch();
}