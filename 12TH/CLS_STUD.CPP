#include<iostream.h>
#include<conio.h>
class student
{
	int rollno;
	char name[30],course[30];
	public:
	void getdata()
	{
		cout<<"Enter Roll number: ";
		cin>>rollno;
		cout<<"Enter name: ";
		cin>>name;
		cout<<"Enter course: ";
		cin>>course;
	}
	void display()
	{
		cout<<endl<<"\nRoll number: "<<rollno;
		cout<<endl<<"Name: "<<name;
		cout<<endl<<"Course: "<<course;
	}
};
void main()
{
	clrscr();
	student s1;
	s1.getdata();
	cout<<endl<<"\nStudent's info: ";
	s1.display();
	getch();
}