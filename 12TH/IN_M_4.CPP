#include<iostream.h>
#include<conio.h>
class deposit
{
	protected:
	int depo;
	public:
	void getdepo()
	{
		cout<<endl<<"Enter the amount you want to deposit: ";
		cin>>depo;
	}
	void dispdepo()
	{
		cout<<"Deposited Amount: "<<depo;
	}
};
class withdraw
{
	protected:
	int wdraw;
	public:
	void getwdraw()
	{
		cout<<endl<<"Enter the amount you want to Withdraw: ";
		cin>>wdraw;
	}
	void dispwdraw()
	{
		cout<<"Withdrawn Amount: "<<wdraw;
	}
};
class account:public deposit,public withdraw
{
	public:
	void show()
	{
		cout<<"Welcome to your Account: ";
	}

};
void main()
{
	clrscr();
	account a1;
	a1.getdepo();
	a1.dispdepo();
	a1.getwdraw();
	a1.dispwdraw();
	getch();
}