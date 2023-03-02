#include<iostream.h>
#include<conio.h>
class stat
{
	public:
	int a;
	static int b;
	stat()
	{
		a=0;
	}
	void increment()
	{
		a++;
		b++;
	}
	void show()
	{
		cout<<"\na & b: "<<a<<" "<<b;
	}
};
int stat::b;
void main()
{
	stat ob,ob1,ob2;
	clrscr();
	ob.increment();
	ob1.increment();
	ob2.increment();
	ob.show();
	ob1.show();
	ob2.show();
	getch();
}