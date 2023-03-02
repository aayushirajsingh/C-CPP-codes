#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
	clrscr();
	int m[10],i,n,a,b;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter elements: ";
	for(i=0;i<n;i++)
	{
		cin>>m[i];
	}
	cout<<"Enter element you want to replace: ";
	cin>>a;
	cout<<"Enter new element: ";
	cin>>b;
	for(i=0;i<n;i++)
	{
		if(m[i]==a)
		{
			m[i]=b;
		}
	}
	cout<<"Elements after replacing: ";
	for(i=0;i<n;i++)
	{
		cout<<setw(5)<<m[i];
	}
	getch();
}