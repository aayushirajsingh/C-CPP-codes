#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[10],b[10],c[10],i,n;
	cout<<"Enter size of Array: ";
	cin>>n;
	cout<<"Enter elements of Array 1: \n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter elements of Array 2: \n";
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	cout<<"Addtion Of Array 1 and Array 2: ";
	for(i=0;i<n;i++)
	{
		cout<<endl<<c[i];
	}
	getch();
}