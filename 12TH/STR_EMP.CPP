#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct employee
{
	int id,sal;
	char name[30],desi[30];
};
void main()
{
	clrscr();
	employee e1;
	cout<<"Enter Employee's ID: ";
	cin>>e1.id;
	cout<<"Enter Employee's Name: ";
	gets(e1.name);
	cout<<"Enter Employee's Designation: ";
	cin>>e1.desi;
	cout<<"Enter Employee's Salary: ";
	cin>>e1.sal;
	cout<<endl<<"Employe's Info: ";
	cout<<endl<<"\nEmployee's ID: "<<e1.id;
	cout<<endl<<"Employee's Name: ";
	puts(e1.name);
	cout<<"Employee's Designation: "<<e1.desi;
	cout<<endl<<"Employee's Salary: "<<e1.sal;
	getch();
}