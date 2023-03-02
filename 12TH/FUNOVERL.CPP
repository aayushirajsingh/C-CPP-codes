#include<iostream.h>
#include<conio.h>
class abc
{
	public:
	void sum(int x,int y)
	{
		cout<<"Addition of two integer numbers= "<<x+y;
	}
	void sum(int x,int y,int z)
	{
		cout<<endl<<"Addition of three integer numbers= "<<x+y+z;
	}
};
void main()
{
	clrscr();
	abc a;
	a.sum(2,3);
	a.sum(2,3,4);
	getch();
}