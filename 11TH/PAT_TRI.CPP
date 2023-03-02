#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,k,n;
	cout<<"Enter the size of triangle: ";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	getch();
}