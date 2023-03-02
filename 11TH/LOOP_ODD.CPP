#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n;
	cout<<"Enter the number till which you want to find odd numbers: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			cout<<endl<<i;
		}
	}
	getch();
}