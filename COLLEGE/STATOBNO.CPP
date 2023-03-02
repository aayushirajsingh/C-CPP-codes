#include<iostream.h>
#include<conio.h>
class A
{
	public:
		static int c;
		A()
		{c++;}
		void call()
		{ cout<<c;}
};
int A::c;
void main()
{   clrscr();
	A ob, ob1, ob2, ob3, ob4, ob5;
	ob.call();
	getch();
}

