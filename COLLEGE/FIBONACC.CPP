#include<iostream.h>
#include<conio.h>
class fib
{
	int n;
	public:
	void display()
	{
		cout<<"Enter a number:";
		cin>>n;
	}
	void swap()
	{
		int a=1,b=0,c=0;
		cout<<a<<endl<<b;
		for(int i=0;i<=n;i++)
		{
			c=a+b;
			cout<<endl<<c;
			a=b;
			b=c;
		}
	}
};
void main()
{
	fib f;
	clrscr();
	f.display();
	f.swap();
	getch();
}