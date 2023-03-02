#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,ans;
	void fib(int);
	cout<<"Enter a number: ";
	cin>>n;
	cout<<endl<<"Fibonacci series: ";
	fib(n);
	getch();
}
void fib(int m)
{
	int i,a=1,b=0,c=0;
	for(i=1;i<=m;i++)
	{
		cout<<endl<<c;
		c=a+b;
		a=b;
		b=c;
	}
}