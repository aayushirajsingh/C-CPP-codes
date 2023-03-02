#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[10],i,n;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"\nEnter array elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nArray: ";
	for(i=0;i<n;i++)
	{
		cout<<endl<<a[i];
	}
	getch();
}