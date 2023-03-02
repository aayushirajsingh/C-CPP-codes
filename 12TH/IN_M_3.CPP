#include<iostream.h>
#include<conio.h>
class rectangle
{
	protected:
	int h,w;
	public:
	void getrect()
	{
		cout<<endl<<"Enter Height of Rectangle: ";
		cin>>h;
		cout<<"Enter Width of Rectangle: ";
		cin>>w;
	}
	void disprect()
	{
		cout<<endl<<"Area of Rectangle: "<<h*w<<endl;
	}
};
class circle
{
	protected:
	int r;
	public:
	void getcir()
	{
		cout<<endl<<"Enter Radius of Circle: ";
		cin>>r;
	}
	void dispcir()
	{
		cout<<endl<<"Area of Circle: "<<3.14*r<<endl;
	}
};
class area:public rectangle,public circle
{
	public:
	void show()
	{
		cout<<"Area of Rectangle & Circle."<<endl;
	}
};
void main()
{
	clrscr();
	area a1;
	a1.show();
	cout<<endl<<"Rectangle."<<endl;
	a1.getrect();
	a1.disprect();
	cout<<endl<<"Circle."<<endl;
	a1.getcir();
	a1.dispcir();
	getch();
}