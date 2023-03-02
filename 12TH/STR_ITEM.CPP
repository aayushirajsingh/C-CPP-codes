#include<iostream.h>
#include<conio.h>
struct item
{
	int code,qty,pr;
	char name[30];
};
void main()
{
	clrscr();
	item i1;
	cout<<"Enter Item's Code: ";
	cin>>i1.code;
	cout<<"Enter Item's Name: ";
	cin>>i1.name;
	cout<<"Enter Item's Quantity: ";
	cin>>i1.qty;
	cout<<"Enter Item's Price: ";
	cin>>i1.pr;
	cout<<endl<<"Item's Info: ";
	cout<<endl<<"\nItem's Code: "<<i1.code;
	cout<<endl<<"Item's Name: "<<i1.name;
	cout<<endl<<"Item's Quantity "<<i1.qty;
	cout<<endl<<"Item's Price: "<<i1.pr;
	getch();
}