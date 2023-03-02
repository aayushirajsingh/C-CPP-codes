#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int ch,a,b;
	cout<<"Enter Two Numbers: ";
	cin>>a>>b;
	cout<<"\n1:Addition.\n2:Subtraction.\n3:Multiplication.\n4:Divide.\n5:Modulation.";
	cout<<endl<<"\nEnter our choice: ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"\nAddition: Answer= "<<a+b;
			break;
		case 2:
			cout<<"\nSubtraction: Answer= "<<a-b;
			break;
		case 3:
			cout<<"\nMultiplication: Answer= "<<a*b;
			break;
		case 4:
			cout<<"\nDivide: Answer= "<<a/b;
			break;
		case 5:
			cout<<"\nModulation: Answer= "<<a%b;
			break;
		default:
			cout<<"\nInvalid choice.";
			break;
	}
	getch();
}