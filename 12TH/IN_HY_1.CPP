#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class bank
{
	public:
	int no,bal;
	void getbank()
	{
		cout<<"Enter Initial Balance: ";
		cin>>bal;
	}
	void putbank()
	{
		cout<<"Initial Balance: "<<bal;
	}
};
class deposit:virtual public bank
{
	int depo;
	public:
	void getdeposit()
	{
		cout<<endl<<"\nEnter the Amount you want to Deposit: ";
		cin>>depo;
		bal+=depo;
		cout<<"Balance after Deposit: "<<bal;
	}
};
class withdraw:virtual public bank
{
	int wdraw;
	public:
	void getwithdraw()
	{
		cout<<endl<<"\nEnter the Amount you want to Withdraw: ";
		cin>>wdraw;
		bal-=wdraw;
		cout<<"Balance after Withdrawal: "<<bal;
	}
};
class account:public deposit,public withdraw
{
	public:
	void getaccount()
	{
		cout<<"Account : "<<endl;
	}
};
void main()
{
	clrscr();
	account a;
	a.getaccount();
	a.getbank();
	a.putbank();
	a.getdeposit();
	a.getwithdraw();
	getch();
}