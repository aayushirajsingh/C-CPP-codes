#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class bank
{
	public:
	int no,bal;
	char name[20],type[20];
	void getbank()
	{
		cout<<"Enter Account Number: ";
		cin>>no;
		cout<<"Enter Name of Account Holder: ";
		gets(name);
		cout<<"Enter Type of Bank Account: ";
		gets(type);
		cout<<"Enter Initial Balance: ";
		cin>>bal;
	}
	void putbank()
	{
		cout<<endl<<"Account Number: "<<no;
		cout<<endl<<"Name of Account Holder: ";
		puts(name);
		cout<<"Type of Bank Account: "<<type;
		cout<<endl<<"Initial Balance: "<<bal;
	}
};
class deposit:public bank
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
class withdraw:public bank
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
void main()
{
	clrscr();
	withdraw w;
	deposit d;
	w.getbank();
	d.bal=w.bal;
	w.putbank();
	d.getdeposit();
	w.bal=d.bal;
	w.getwithdraw();
	getch();
}