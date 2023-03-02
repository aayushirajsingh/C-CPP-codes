#include<iostream.h>
#include<conio.h>
class calc
{
	public:
	calc();
	calc(float a,float b);
	calc(int a,int b,int c);
};
calc::calc()
{}
calc::calc(float a,float b)
{
	float add;
	add=a+b;
	cout<<"Addition= "<<add;
}
calc::calc(int a,int b,int c)
{
	int mul;
	mul=a*b*c;
	cout<<endl<<"Multiplication= "<<mul;
}
void main()
{
	clrscr();
	calc c1,c2(5.0,2.3),c3(2,4,5);
	getch();
}