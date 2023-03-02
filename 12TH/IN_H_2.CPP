#include<iostream.h>
#include<conio.h>
class area
{
	public:
	float l,r;
	void getarea()
	{
		cout<<"Enter the Length: ";
		cin>>l;
		cout<<"Enter the Radius: ";
		cin>>r;
	}
};
class circle:public area
{
	public:
	float ar;
	void putcircle()
	{
		ar=3.14*r*r;
		cout<<endl<<"Area of Circle= "<<ar;
	}
};
class square:public area
{
	public:
	float ar;
	void putsquare()
	{
		ar=l*l;
		cout<<endl<<"Area of Square= "<<ar;
	}
};
void main()
{
	clrscr();
	circle c;
	square s;
	s.getarea();
	c.r=s.r;
	s.putsquare();
	c.putcircle();
	getch();
}