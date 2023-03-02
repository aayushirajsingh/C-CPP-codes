#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int add(int,int);
	int a,b,ans;
	cout<<"Enter two numbers you want to add: ";
	cin>>a>>b;
	ans=add(a,b);
	cout<<"Addition is: "<<ans;
	getch();
}
//function of addtion.
int add(int n,int m)
{
	int total;
	total=n+m;
	return total;
}