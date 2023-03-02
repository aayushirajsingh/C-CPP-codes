#include<iostream.h>
#include<conio.h>
class binary
{
	int n,a,sum;
	public:
	void display()
	{
		cout<<"Enter a level: ";
		cin>>n;
	}
	void func()
	{
		a=1;
		sum=1;
		for(int i=1;i<=n;i++)
		{
			a=a*2;
		}
		cout<<"\nNumber of nodes of level "<<n<<": "<<a;
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