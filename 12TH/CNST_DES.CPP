#include<iostream.h>
#include<conio.h>
int count=0;
class alpha
{
	clrscr();
	public:
	alpha()
	{
		count++;
		cout<<endl<<"Number of Object created "<<count;
	}
	~alpha()
	{
		cout<<endl<<"Number of Object destroyed "<<count;
		count--;
	}
};
void main()
{
	clrscr();
	cout<<"Enter Main"<<endl;
	{
		alpha A1,A2,A3,A4;
		{
			cout<<endl<<"\nEnter Block 1\n";
			alpha A5;
		}
		{
			cout<<endl<<"\nEnter Block 2\n";
			alpha A6;
		}
		cout<<endl<<"\nRe-Enter Main\n";
	}
	getch();
}