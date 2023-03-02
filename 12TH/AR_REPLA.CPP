#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[10],i,n,b,c;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"\nEnter array elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nEnter the element you want to replace: ";
	cin>>b;
	cout<<"\nEnter new element: ";
	cin>>c;
	for(i=0;i<n;i++)
	{
		if(a[i]==b)
		{
			a[i]=c;
		}
	}
	cout<<"\n Array after replacing element: ";
	for(i=0;i<n;i++)
	{
		cout<<endl<<a[i];
	}
	getch();
}