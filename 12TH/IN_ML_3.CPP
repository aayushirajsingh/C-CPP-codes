#include<iostream.h>
#include<conio.h>
#include<stdio.h>
const int len=25;
class person
{
	char name[len];
	int age;
	public:
	void readperson();
	void displayperson()
	{
		cout<<endl<<"\nName: ";
		cout.write(name,len);
		cout<<endl<<"Age: "<<age;
	}
};
void person::readperson()
{
	for(int i=0;i<len;i++)
	{
		name[i]=' ';
	}
	cout<<"Enter Name of the Person: ";
	gets(name);
	cout<<"Enter Age: ";
	cin>>age;
}
class student:public person
{
	int rollno;
	float average;
	public:
	void readstudent()
	{
		readperson();
		cout<<"Enter Roll Number: ";
		cin>>rollno;
		cout<<"Enter Average Marks: ";
		cin>>average;
	}
	void disp_rollno()
	{
		cout<<endl<<"Roll Number: "<<rollno;
	}
	float getaverage()
	{
		return average;
	}
};
class gradstudent:public student
{
	char subject[len],working;
	public:
	void readit();
	void displaysubject()
	{
		cout<<endl<<"Subject: ";
		cout.write(subject,len);
	}
	char workstatus()
	{
		return working;
	}
};
void gradstudent::readit()
{
	readstudent();
	for(int i=0;i<len;i++)
	{
		subject[i]=' ';
	}
	cout<<"Enter Main Subject: ";
	gets(subject);
	cout<<"Working ?(Y/N): ";
	cin>>working;
}
void main()
{
	clrscr();
	const int size=5;
	gradstudent grad[size];
	int year,num_working=0,non_working=0,div1=0,total=0;
	float topscore=0,score,number,wperc,nwperc;
	cout<<"Enter Year: ";
	cin>>year;
	for(int i=0;i<size;i++)
	{
		cout<<endl<<"Enter Details for Graduate: "<<(i+1)<<endl;
		grad[i].readit();
		total++;
		if((grad[i].workstatus()=='y')||(grad[i].workstatus()=='Y'))
		{
			num_working++;
		}
		else
		{
			non_working++;
		}
		score=grad[i].getaverage();
		if(score>topscore)
		{
			topscore=score;
			number=i;
		}
		if(score>=60.0)
		{
			div1++;
		}
	}
	i=number;
	cout<<endl<<"Report for the Year: "<<year<<endl;
	cout<<endl<<"Working Graduates: "<<num_working;
	cout<<endl<<"Non-Working Graduates: "<<non_working;
	cout<<endl<<"\nDetails of the Top Scorer.";
	grad[i].displayperson();
	grad[i].displaysubject();
	nwperc=((float)non_working/(float)total)*100;
	wperc=((float)div1/(float)total)*100;
	cout<<endl<<"Average Marks: "<<grad[i].getaverage();
	cout<<endl<<nwperc<<" % of the Graduates this Year are Non-Working and\n"<<wperc<<" % are First Divisioners.";
	getch();
}