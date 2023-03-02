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
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if((i==1)||(i==n)||(j==1)||(j==n))
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