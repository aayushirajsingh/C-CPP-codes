#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int add(int,int),sub(int,int),multi(int,int),div(int,int),mod(int,int);
	int a,b,ans;
	cout<<"Enter any two numbers: ";
	cin>>a>>b;
	cout<<"\nChoices: \n1:Addition.\n2:Subtraction.\n3:Multiplication.\n4:Division.\n5:Modulation.\n";
	cout<<"\nEnter your choice: ";
	cin>>ans;

	switch(ans)
	{
		case 1:
			ans=add(a,b);
			cout<<"\nAnswer:"<<ans;
			break;
		case 2:
			ans=sub(a,b);
			cout<<"\nAnswer:"<<ans;
			break;
		case 3:
			ans=multi(a,b);
			cout<<"\nAnswer:"<<ans;
			break;
		case 4:
			ans=div(a,b);
			cout<<"\nAnswer:"<<ans;
			break;
		case 5:
			ans=mod(a,b);
			cout<<"\nAnswer:"<<ans;
			break;
		default:
			cout<<"\nINVALID CHOICE!!";
	}
	getch();
}
//Addition function.
int add(int m,int n)
{
	int total;
	total=m+n;
	return total;
}
//Subtraction function.
int sub(int m,int n)
{
	int total;
	total=m-n;
	return total;
}
//Multiplication function.
int multi(int m,int n)
{
	int total;
	total=m*n;
	return total;
}
//Division function.
int div(int m,int n)
{
	int total;
	total=m/n;
	return total;
}
//Modulation function.
int mod(int m,int n)
{
	int total;
	total=m%n;
	return total;
}