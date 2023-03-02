#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class stud
{
	protected:
	int no;
	char name[20];
	public:
	void getstud()
	{
		cout<<"Enter Name of Student: ";
		gets(name);
		cout<<"Enter Roll Number: ";
		cin>>no;
	}
	void putstud()
	{
		cout<<endl<<"Name: ";
		puts(name);
		cout<<"Roll Number: "<<no;
	}
};
class marks:public stud
{
	protected:
	int m1,m2;
	public:
	void getmarks()
	{
		cout<<endl<<"Enter Marks of Science: ";
		cin>>m1;
		cout<<"Enter Marks of Maths: ";
		cin>>m2;
	}
	void putmarks()
	{
		cout<<endl<<"Marks of Science: "<<m1;
		cout<<endl<<"Marks of Maths: "<<m2;
	}
};
class result:public marks
{
	protected:
	int total;
	public:
	void display()
	{
		total=m1+m2;
		cout<<endl<<"Total Marks = "<<total;
	}
};
void main()
{
	clrscr();
	result r1;
	r1.getstud();
	r1.getmarks();
	cout<<endl<<"Sudent's Info:\n";
	r1.putstud();
	r1.putmarks();
	r1.display();
	getch();
}