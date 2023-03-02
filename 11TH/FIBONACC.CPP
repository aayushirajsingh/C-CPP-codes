#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a=1,b=0,c=0,i,n;
	cout<<"Enter a number:";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		c=a+b;
		cout<<endl<<c;
		a=b;
		b=c;
	}
	getch();
}