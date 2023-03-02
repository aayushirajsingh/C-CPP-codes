#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class student
{
	int rollno,marks;
	char name[20],course[20];
	public:
	void getdata()
	{
		cout<<"Enter Student's Details:"<<endl;
		cout<<endl<<"Enter Roll number: ";
		cin>>rollno;
		cout<<"Enter name: ";
		gets(name);
		cout<<"Enter course: ";
		cin>>course;
		cout<<"Enter marks: ";
		cin>>marks;
	}
	void putdata()
	{
		cout<<endl<<"Student's Info: ";
		cout<<endl<<"\nRoll number: "<<rollno;
		cout<<endl<<"Name: ";
		puts(name);
		cout<<"Course: "<<course;
		cout<<endl<<"Marks: "<<marks<<endl;
	}
};
class department:public student
{
	int id,no;
	char name[20],loc[20];
	public:
	void getdata()
	{
		student::getdata();
		cout<<endl<<"Enter Department's Details:"<<endl;
		cout<<endl<<"Enter Department's ID: ";
		cin>>id;
		cout<<"Enter Department's name: ";
		gets(name);
		cout<<"Enter Department's location: ";
		cin>>loc;
		cout<<"Enter Department's number of employees: ";
		cin>>no;
	}
	void putdata()
	{
		student::putdata();
		cout<<endl<<"Department's Info: "<<endl;
		cout<<endl<<"Department's ID: "<<id<<endl;
		cout<<"Department's name: ";
		puts(name);
		cout<<"Department's location: "<<loc<<endl;
		cout<<"Department's number of employees: "<<no<<endl;
	}
};
void main()
{
	clrscr();
	department d1;
	d1.getdata();
	cout<<endl<<"Info : ";
	d1.putdata();
	getch();
}