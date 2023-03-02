#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,ans,fact(int);
	cout<<"Enter N number: ";
	cin>>n;
	ans=fact(n);
	cout<<"Factorial is: "<<ans;
	getch();
}
int fact(int m)
{
	int total=1;
	for(int i=1;i<=m;i++)
	{
		total*=i;
	}
	return total;
}