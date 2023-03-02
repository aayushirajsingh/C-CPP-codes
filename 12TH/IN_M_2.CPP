#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class student
{
	protected:
	int rollno;
	char name[30],course[30];
	public:
	void getstud()
	{
		cout<<endl<<"Enter Student's Name : ";
		gets(name);
		cout<<"Enter Student's Roll Number: ";
		cin>>rollno;
		cout<<"Enter Student's Course: ";
		cin>>course;
	}
	void putstud()
	{
		cout<<"Student's Name: ";
		puts(name);
		cout<<"Student's Roll Number: "<<rollno<<endl;
		cout<<"Student's Course: "<<course<<endl;
	}
};
class employee
{
	protected:
	int id,sal;
	char name[30];
	public:
	void getemp()
	{
		cout<<endl<<"Entre Employee's Name: ";
		gets(name);
		cout<<"Enter Employee's ID: ";
		cin>>id;
		cout<<"Enter Employee's Salary: ";
		cin>>sal;
	}
	void putemp()
	{
		cout<<"Employee's Name: ";
		puts(name);
		cout<<"Employee's ID: "<<id<<endl;
		cout<<"Employee's Salary: "<<sal<<endl;
	}
};
class company:public student,public employee
{
	public:
	void show()
	{
		cout<<"Welcome To The Company. "<<endl;
	}
};
void main()
{
	clrscr();
	company c1;
	c1.show();
	c1.getstud();
	cout<<endl<<"Student's Info:\n"<<endl;
	c1.putstud();
	c1.getemp();
	cout<<endl<<"Employee's Info:\n"<<endl;
	c1.putemp();
	getch();
}