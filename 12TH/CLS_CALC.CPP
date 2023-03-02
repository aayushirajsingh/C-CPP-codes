#include<iostream.h>
#include<conio.h>
class calc
{
	int a,b,add,sub,mul,div,mod;
	public:
	void getdata()
	{
		cout<<endl<<"Enter Number 1: ";
		cin>>a;
		cout<<"Enter Number 2: ";
		cin>>b;
	}
	void Addition()
	{
		add=a+b;
		cout<<endl<<"Addition= "<<add;
	}
	void Subtraction()
	{
		sub=a-b;
		cout<<endl<<"Subtraction= "<<sub;
	}
	void Multiplication()
	{
		mul=a*b;
		cout<<endl<<"Multiplication= "<<mul;
	}
	void Division()
	{
		div=a/b;
		cout<<endl<<"Division= "<<div;
	}
	void Modulation()
	{
		mod=a%b;
		cout<<endl<<"Modulation= "<<mod;
	}
};
void main()
{
	clrscr();
	calc c1;
	int ch;
	c1.getdata();
	do
	{
		cout<<endl<<"\nChoices: \n1:Addition.\n2:Subtraction.\n3:Multiplication.\n4:Division.\n5:Modulation.\n";
		cout<<"\nEnter your choice: ";
		cin>>ch;

		switch(ch)
		{
			case 1:
				c1.Addition();
				break;
			case 2:
				c1.Subtraction();
				break;
			case 3:
				c1.Multiplication();
				break;
			case 4:
				c1.Division();
				break;
			case 5:
				c1.Modulation();
				break;
			default:
				cout<<"\nINVALID CHOICE!!";
		}
	}while(ch<=5);
	getch();
}