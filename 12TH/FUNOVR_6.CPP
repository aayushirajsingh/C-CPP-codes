#include<iostream.h>
#include<conio.h>
class bank
{
	public:
	void calcsal(int id)
	{
		cout<<"Employee's ID: "<<id;
	}
	void calcsal(int sal,int leave)
	{
		leave=sal-(100*leave);
		cout<<endl<<"Employee's Salary: "<<sal;
		cout<<endl<<"Employee's Deducted Salary: "<<leave;
	}
	void calcsal(int sal,int exday,int incentive)
	{
		incentive=sal+(incentive);
		cout<<endl<<"Days Employee worked Extra: "<<exday;
		cout<<endl<<"Employee's Incentive: "<<incentive;
	}
};
void main()
{
	clrscr();
	bank b;
	b.calcsal(101);
	b.calcsal(1000,2);
	b.calcsal(1000,2,200);
	getch();
}