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
		int i,j;
		for(i=0;i<=n;i++)
		{
			cout<<"*";
			for(j=1;j<=i;j++)
			{
				if((j==i)||(i==n))
				{
					cout<<"*";
				}
				else
				{
					cout<<" ";
				}
			}
			cout<<endl;
		}
	}
};
void main()
{
	pattern p;
	clrscr();
	p.display();
	p.square();
	getch();
}