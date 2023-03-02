#include<iostream.h>
#include<conio.h>
class Area
{
	public:
	void ar(int r)
	{
		cout<<"Area of circle= "<<3.14*r<<endl;
	}
	void ar(int a,int b)
	{
		cout<<"Area of rectangle= "<<a*b<<endl;
	}
	void ar(int l,int w,int h)
	{
		cout<<"Area of tringle= "<<l*w*h<<endl;
	}
};
void main()
{
	clrscr();
	Area a;
	a.ar(10);
	a.ar(3,4);
	a.ar(3,6,4);
	getch();
}