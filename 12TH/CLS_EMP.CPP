#include<iostream.h>
#include<conio.h>
class employee
{
	int id,sal;
	char name[30],desig[30];
	public:
	void getdata()
	{
		cout<<endl<<"Enter Employee's ID: ";
		cin>>id;
		cout<<"Enter Employee's Name: ";
		cin>>name;
		cout<<"Enter Employee's Designation: ";
		cin>>desig;
		cout<<"Enter Employee's Salary: ";
		cin>>sal;
	}
	void display()
	{
		cout<<endl<<"\nEmployee's ID: "<<id;
		cout<<endl<<"Employee's Name: "<<name;
		cout<<endl<<"Employee's Designation: "<<desig;
		cout<<endl<<"Employee's Salary: "<<sal;
	}
};
void main()
{
	clrscr();
	employee e1,e2,e3;
	e1.getdata();
	e2.getdata();
	e3.getdata();
	cout<<endl<<"\nEmployee's Info: ";
	e1.display();
	e2.display();
	e3.display();
	getch();
}