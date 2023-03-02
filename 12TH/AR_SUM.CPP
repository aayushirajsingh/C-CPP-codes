#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[10],i,n,sum=0;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"\nEnter elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	cout<<"\nAddition of array elements= "<<sum;
	getch();
}