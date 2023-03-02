#include<iostream.h>
#include<conio.h>
class base1
{
	protected:
	int a;
	public:
	base1(int x)
	{
		a=x;
		cout<<"Constructing Base 1 "<<endl;
	}
	~base1()
	{
		cout<<"Destructing Base 1 "<<endl;
	}
};
class base2
{
	protected:
	int b;
	public:
	base2(int y)
	{
		b=y;
		cout<<"Constructing Base 2 "<<endl;
	}
	~base2()
	{
		cout<<"Destructing Base 2 "<<endl;
	}
};
class derived:public base2,public base1
{
	int c;
	public:
	derived(int i,int j,int k):base1(i),base2(j)
	{
		c=k;
		cout<<"Constructing Derived. "<<endl;
	};
	~derived()
	{
		cout<<"Destructing derived. "<<endl;
	}
	void show()
	{
		cout<<"1."<<a<<"\t2."<<b<<"\t3."<<c<<endl;
	}
};
void main()
{
	clrscr();
	{
		derived ob(14,15,16);
		ob.show();
	}
	getch();
}