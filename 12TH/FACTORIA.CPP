#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,i,f=1;
	cout<<"Enter a number:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	cout<<endl<<"Factorial= "<<f;
	getch();
}