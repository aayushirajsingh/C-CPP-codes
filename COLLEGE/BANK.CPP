#include<iostream.h>
#include<conio.h>
class account
{
	int acc_no,dep,bal,with;
	char cust_name[20],type;
	public:
	void bal();
	void deposit();
	void withdraw();
	void acc();

}
void account::bal()
{
	bal=0;
	cout<<"Your balance: ";
	cout<<bal;
}
void account::deposit()
{
	cout<<"Enter the amount you want to Deposit: ";
	cin>>dep;
	bal=+dep;
}
void account::withdraw()
{
	cout<<"Enter the amount you want to Withdraw: ";
	cin>>with;
	bal=-with;
	if(bal<=500)
	{
		cout<<"You have withdrawn past the limit, a penalty of Rs.20 will be imposed.";
		void penalty()
		{

		}
	}
}
void account::acc()
{
	cout<<"Enter your name: ";
	cin>>cust_name;
	cout<<"Enter your account number: ";
	cin>>acc_no;
	cout<<"Enter type of account Current/Saving: (C/S)";
	cin>>type;
	cout<<"Enter the amount (>"
}