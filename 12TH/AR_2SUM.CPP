#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[10],b[10],c[10],i,n;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"\nEnter elements of array A: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nEnter elements of array B: ";
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	cout<<"\nSum of array A & B in array C= ";
	for(i=0;i<n;i++)
	{
		cout<<endl<<c[i];
	}
	getch();
}