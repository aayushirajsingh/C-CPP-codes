#include<iostream.h>
#include<conio.h>
class pattern
{
	public:
	void func()
	{
		for(int i=1;i<=4;i++)
		{
			cout<<"A";
			for(int j=3;j>=1;j--)
			{
				cout<<"B";
			}
			cout<<endl;
		}
	}
};
void main()
{
	pattern p;
	clrscr();
	p.func();
	getch();
}