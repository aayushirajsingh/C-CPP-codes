#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,ch;
	cout<<"Enter any two numbers: ";
	cin>>a>>b;
	cout<<"\nChoices:\n1:Addition.\n2:Subtraction.\n3:Multiplication.\n4:Divide.\n5:Modulation.";
	cout<<"\n\nEnter your choice. ";
	cin>>ch;

	if(ch==1)
	{
		cout<<"Answer: "<<a+b;
	}
	else if(ch==2)
	{
		cout<<"Answer: "<<a-b;
	}
	else if(ch==3)
	{
		cout<<"Answer: "<<a*b;
	}
	else if(ch==4)
	{
		cout<<"Answer: "<<a/b;
	}
	else if(ch==5)
	{
		cout<<"Answer: "<<a%b;
	}
	else
	{
		cout<<endl<<"INVALID CHOICE!!";
	}
	getch();
}
