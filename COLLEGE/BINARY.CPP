#include<iostream.h>
#include<conio.h>
class binary
{
	int t,n,a[100];
	public:
	void display()
	{
		cout<<"Enter a number: ";
		cin>>n;
	}
	void func()
	{
		for(int i=1;n>0;i++)
		{
			a[i]=n%2;
			n=n/2;
		}
		for(i=i-1;i>=0;i--)
		{
			cout<<endl<<a[i];
		}
	}
};
void main()
{
	binary b;
	clrscr();
	b.display();
	b.func();
	getch();
}