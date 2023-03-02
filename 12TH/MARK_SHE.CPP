#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,c,d,e,total,per;
	cout<<"Enter the marks of: ";
	cout<<"\nEnglish.";
	cin>>a;
	cout<<"Maths.";
	cin>>b;
	cout<<"Physics.";
	cin>>c;
	cout<<"Chemistry.";
	cin>>d;
	cout<<"Computer Science.";
	cin>>e;
	total=a+b+c+d+e;
	per=total/5;
	if(per>=80)
	{
		cout<<"Grade A+";
	}
	else if(per>=70 && per<80)
	{
		cout<<"Grade A";
	}
	else if(per>=60 && per<70)
	{
		cout<<"Grade B";
	}
	else if(per>=50 && per<60)
	{
		cout<<"Grade C";
	}
	else if(per>=40 && per<50)
	{
		cout<<"Grade D";
	}
	else if(per>=30 && per<40)
	{
		cout<<"Grade E";
	}
	else
	{
		cout<<"FAIL";
	}
	getch();
}