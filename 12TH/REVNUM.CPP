#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	long int n,sum=0;
	cout<<"Enter a number: ";
	cin>>n;
	while(n>0)
	{
		sum=sum*10+n%10;
		n/=10;
	}
	cout<<"Reverse= "<<sum;
	getch();
}