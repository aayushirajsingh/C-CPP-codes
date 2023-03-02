#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int ch,a,b;
	do
	{
		cout<<endl<<"\n1:Area of Rectangle.\n2:Area of Circle.\n3:Area of Square.";
		cout<<endl<<"\nEnter our choice: ";
		cin>>ch;
		cout<<endl<<"Enter The Values: ";
		cin>>a>>b;
		switch(ch)
		{
			case 1:
				cout<<"\nArea of Rectangl= "<<a*b;
				break;
			case 2:
				cout<<"\nArea of Circle= "<<4*3.14*a*a;
				break;
			case 3:
				cout<<"\nArea of Square"<<a*a;
				break;
			default:
				cout<<"\nInvalid choice.";
				break;
		}
	}while(ch>=1 && ch<=3);
	getch();
}