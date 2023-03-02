#include<iostream.h>
#include<stdio.h>
#include<conio.h>
struct emp
{
	int id;
	char name[20];
	double sal;
};
void reademp(emp &e)
{
	cout<<"Enter Employee's ID: ";
	cin>>e.id;
	cout<<"Enter Employee's Name: ";
	gets(e.name);
	cout<<"Enter Employee's Salary: ";
	cin>>e.sal;
}
void showemp(emp e)
{
	cout<<endl<<"Employee's Info: \n";
	cout<<endl<<"Employee's ID: "<<e.id;
	cout<<endl<<"Employee's Name: "<<e.name;
	cout<<endl<<"Employee's Salary: "<<e.sal;
}
void main()
{
	clrscr();
	emp e1;
	reademp(e1);
	showemp(e1);
	getch();
}