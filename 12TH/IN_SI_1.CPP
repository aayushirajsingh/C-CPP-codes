#include<iostream.h>
#include<conio.h>
#include<stdio.h>
const int len=25;
class employee
{
	private:
	char name[len];
	unsigned long id;
	public:
	void getdata()
	{
		cout<<"Enter Employee's Name: ";
		gets(name);
		cout<<"Enter Employee's ID: ";
		cin>>id;
	}
	void putdata()
	{
		cout<<"Employee's Name: "<<name<<endl;
		cout<<"Employee's ID: "<<id<<endl;
		cout<<"Employee's Basic Salary: "<<basic<<endl;
	}
	protected:
	float basic;
	void getbasic()
	{
		cout<<"Enter Basic Salary: ";
		cin>>basic;
	}
};
class manager:public employee
{
	private:
	char title[len];
	public:
	void getdata()
	{
		employee::getdata();
		getbasic();
		cout<<"Enter Title: ";
		gets(title);
		cout<<endl;
	}
	void putdata()
	{
		employee::putdata();
		cout<<"Title: "<<title<<endl;
	}
};
void main()
{
	clrscr();
	manager m1,m2;
	cout<<"Manager 1\n"<<endl;
	m1.getdata();
	cout<<"Manager 2\n"<<endl;
	m2.getdata();
	cout<<"Manager 1 Info:\n"<<endl;
	m1.putdata();
	cout<<"\nManager 2 Info:\n"<<endl;
	m2.putdata();
	getch();
}