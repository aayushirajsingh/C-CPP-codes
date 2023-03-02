#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n,a=1,b=0,c=0;
	cout<<"\nEnter N number: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		c=a+b;
		cout<<endl<<c;
		a=b;
		b=c;
	}
	getch();
}
