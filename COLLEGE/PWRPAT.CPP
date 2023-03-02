#include<iostream.h>
#include<conio.h>
class pattern
{
	int n;
	public:
	void display()
	{
		cout<<"Enter a level: ";
		cin>>n;
	}
	void square()
	{
		int i,j,t=1;
		for(i=1;i<=n;i++)
		{
			t=t*2;
			for(j=1;j<=t;j++)
			{
				cout<<"* ";
			}
			cout<<endl;
		}
	}
};
int main()
{
	pattern p;
	clrscr();
	p.display();
	p.square();
	return 0;
}