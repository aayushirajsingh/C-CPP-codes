//Program to input week number & print week day.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a;
	cout<<"Enter week number from 1-7: ";
	cin>>a;
	switch(a)
	{
		case 1:
			cout<<"Sunday";
			break;
		case 2:
			cout<<"Monday";
			break;
		case 3:
			cout<<"Tuesday";
			break;
		case 4:
			cout<<"Wednesday";
			break;
		case 5:
			cout<<"Thursday";
			break;
		case 6:
			cout<<"Friday";
			break;
		case 7:
			cout<<"Saturday";
			break;
		default:
			cout<<"Invalid number.";
	}
	getch();
}