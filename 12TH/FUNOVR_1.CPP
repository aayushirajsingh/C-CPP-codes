#include<iostream.h>
#include<conio.h>
class volume
{
	public:
	int vol(int s)
	{
		return(s*s*s);
	}
	double vol(double r,int h)
	{
		return(3.14519*r*r*h);
	}
	long vol(long l,int b,int h)
	{
		return(l*b*h);
	}
};
void main()
{
	clrscr();
	volume a;
	cout<<a.vol(10)<<endl;
	cout<<a.vol(2.5,8)<<endl;
	cout<<a.vol(100L,75,15)<<endl;
	getch();
}