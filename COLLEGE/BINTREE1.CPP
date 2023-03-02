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
			sum+=a;
		}
		cout<<"\nNumber of nodes of level "<<n<<": "<<a<<endl;
		cout<<"All the nodes upto level "<<n<<": "<<sum;
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