#include<iostream.h>
#include<conio.h>
class shape
{
	public:
	float area;
};
class circle:public shape
{
	protected:
	float r;
	public:
	void getcircle()
	{
		cout<<"Enter the Radius: ";
		cin>>r;
	}
};
class cal:public circle
{
	public:
	void display()
	{
		area=3.14*r*r;
		cout<<"Area of Circle: "<<area;
	}
};
void main()
{
	clrscr();
	cal c1;
	c1.getcircle();
	c1.display();
	getch();
}