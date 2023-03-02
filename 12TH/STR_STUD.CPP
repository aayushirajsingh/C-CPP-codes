#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct student
{
	int rollno;
	char name[30],course[30];
};
void main()
{
	clrscr();
	student s1;
	cout<<"Enter Name: ";
	gets(s1.name);
	cout<<"Enter Roll number: ";
	cin>>s1.rollno;
	cout<<"Enter Course: ";
	cin>>s1.course;
	cout<<endl<<"Student's Info: ";
	cout<<endl<<"\nName: ";
	puts(s1.name);
	cout<<"Roll number: "<<s1.rollno;
	cout<<endl<<"Course: "<<s1.course;
	getch();
}