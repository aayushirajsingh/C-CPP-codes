#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int ch;
	cout<<"1.Monday.\n2.Tuesday.\n3.Wednesday.\n4.Thursday.\n5.Friday.\n6.Saturday.\n7.Sunday.";
	cout<<endl<<"\nEnter our choice: ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"\nMonday.";
			break;
		case 2:
			cout<<"\nTuesday.";
			break;
		case 3:
			cout<<"\nWednesday.";
			break;
		case 4:
			cout<<"\nThursday.";
			break;
		case 5:
			cout<<"\nFriday.";
			break;
		case 6:
			cout<<"\nSaturday.";
			break;
		case 7:
			cout<<"\nSunday.";
			break;
		default:
			cout<<"\nInvalid choice.";
			break;
	}
	getch();
}
