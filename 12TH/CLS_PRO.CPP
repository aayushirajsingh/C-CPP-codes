#include<iostream.h>
#include<conio.h>
class product
{
	int code,qty,pr;
	char name[30];
	public:
	void getdata()
	{
		cout<<endl<<"Enter Product's Code: ";
		cin>>code;
		cout<<"Enter Product's Name: ";
		cin>>name;
		cout<<"Enter Product's Quantity: ";
		cin>>qty;
		cout<<"Enter Product's Price: ";
		cin>>pr;
	}
	void display()
	{
		cout<<endl<<"\nProduct's Code: "<<code;
		cout<<endl<<"Product's Name: "<<name;
		cout<<endl<<"Product's Quantity "<<qty;
		cout<<endl<<"Product's Price: "<<pr;
	}
};
void main()
{
	clrscr();
	product p1,p2,p3;
	p1.getdata();
	p2.getdata();
	cout<<endl<<"\nProduct's Info: ";
	p1.display();
	p2.display();
	getch();
}