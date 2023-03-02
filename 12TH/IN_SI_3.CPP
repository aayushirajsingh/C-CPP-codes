#include<iostream.h>
#include<conio.h>
class calc
{
	public:
	int n1,n2,addi,subt,mult,divi,modu;
	void getdata()
	{
		cout<<"Enter two number:  ";
		cin>>n1>>n2;
	}
};
class mycal:public calc
{
	int add,sub,mul,div,mod;
	public:
	void getdata()
	{
		calc::getdata();
	}
	void putdata()
	{
		cout<<"\nAddition = "<<n1+n2<<endl;
		cout<<"Subtraction = "<<n1-n2<<endl;
		cout<<"Multiplication = "<<n1*n2<<endl;
		cout<<"Division = "<<n1/n2<<endl;
		cout<<"Modulous = "<<n1%n2<<endl;
	}
};
void main()
{
	clrscr();
	mycal m1;
	m1.getdata();
	cout<<"\nCalculations: "<<endl;
	m1.putdata();
	getch();
}