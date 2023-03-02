#include<iostream.h>
#include<conio.h>
class subject
{
	int days,subno;
	public:
	subject(int d=123,int sn=101);
	void printsub()
	{
		cout<<"Subject number: "<<subno;
		cout<<"Days: "<<days<<endl;
	}
};
subject::subject(int d,int sn)
{
	cout<<"Constructing Subject"<<endl;
	days=d;
	subno=sn;
}
class student
{
	int rollno;
	float marks;
	public:
	student()
	{
		cout<<"Constructing Student"<<endl;
		rollno=0;
		marks=0.0;
	}
	void getval()
	{
		cout<<"Enter roll number and marks: ";
		cin>>rollno>>marks;
	}
	void print()
	{
		cout<<"Rollno: "<<rollno;
		cout<<endl<<"Marks: "<<marks<<endl;
	}
};
class admission
{
	subject sub;
	student stud;
	float fees;
	public:
	admission()
	{
		cout<<"Constructing Admission"<<endl;
		fees=0.0;
	}
	void print()
	{
		stud.print();
		sub.printsub();
		cout<<"Fees: "<<fees<<endl;
	}
};
void main()
{
	clrscr();
	admission adm;
	cout<<"Back in main()";
	getch();
}