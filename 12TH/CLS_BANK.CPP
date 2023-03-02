#include<iostream.h>
#include<conio.h>
class Bank
{
	int no,bal,depo,wdraw;
	char name[30],type[30];
	public:
	void getdata()
	{
		cout<<"Enter Account number: ";
		cin>>no;
		cout<<"Enter Account holder's name: ";
		cin>>name;
		cout<<"Enter Type of account: ";
		cin>>type;
		cout<<"Enter Initial balance: ";
		cin>>bal;
	}
	void deposit()
	{
		cout<<endl<<"Enter the amount you want to deposit: ";
		cin>>depo;
		bal+=depo;
		cout<<endl<<"Balance after deposit= "<<bal;
	}
	void withdraw()
	{
		cout<<endl<<"Enter the amount you want to withdraw: ";
		cin>>wdraw;
		bal-=wdraw;
		cout<<endl<<"Balance after Withdrawal= "<<bal;
	}
};
void main()
{
	clrscr();
	Bank b1;
	int ch;
	b1.getdata();
	do
	{
		cout<<endl<<"\nYou want to:\n1.Deposit.\n2.Withdraw.";
		cout<<endl<<"Enter your choice: ";
		cin>>ch;

		switch(ch)
		{
			case 1:
				b1.deposit();
				break;
			case 2:
				b1.withdraw();
				break;
			default:
				cout<<"INVALID CHOICE!!!";
		}
	}while(ch<=2);
	getch();
}