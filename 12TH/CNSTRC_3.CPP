#include<iostream.h>
#include<conio.h>
class deposit
{
	long int principal;
	int time;
	float rate,tot_amt;
	public:
	deposit();
	deposit(long p,int t,float r);
	deposit(long p,int t);
	deposit(long p,float r);
	void cal_amt();
	void display();
};
deposit::deposit()
{
	principal=time=rate=0.0;
}
deposit::deposit(long p,int t,float r)
{
	principal=p;
	time=t;
	rate=r;
}
deposit::deposit(long p,int t)
{
	principal=p;
	time=t;
	rate=0.08;
}
deposit::deposit(long p,float r)
{
	principal=p;
	time=2;
	rate=r;
}
void deposit::cal_amt()
{
	tot_amt=principal+(principal*time*rate)/100;
}
void deposit::display()
{
	cout<<"\nPrincipal amount: Rs."<<principal;
	cout<<endl<<"Period of investment: "<<time<<" years";
	cout<<endl<<"Rate of interest: "<<rate;
	cout<<endl<<"Total Amount: Rs."<<tot_amt;
}
void main()
{
	clrscr();
	deposit d1,d2(2000,2,0.07f),d3(4000,1),d4(3000,0.12f);
	d1.cal_amt();
	d2.cal_amt();
	d3.cal_amt();
	d4.cal_amt();
	cout<<"Object 1";
	d1.display();
	cout<<endl<<"\nObject 2";
	d2.display();
	cout<<endl<<"\nObject 3";
	d3.display();
	cout<<endl<<"\nObject 4";
	d4.display();
	getch();
}