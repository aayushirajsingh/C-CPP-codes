#include<iostream.h>
#include<conio.h>
class integer
{
	int m,n;
	public:
	integer(int,int);
	void display()
	{
		cout<<"m= "<<m<<endl;
		cout<<"n= "<<n<<endl;
	}
};
integer::integer(int x,int y)
{
	m=x;
	n=y;
}
void main()
{
	clrscr();
	integer int1(0,100);               //contructor called implicitly.
	integer int2=integer(25,75); 	   //contructor called explicitly.
	cout<<"\nObject 1:"<<endl;
	int1.display();
	cout<<"\nObject 2:"<<endl;
	int2.display();
	getch();
}