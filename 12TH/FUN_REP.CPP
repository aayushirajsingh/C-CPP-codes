#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n,a[10];
	void arr(int[],int);
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<endl<<"Enter Elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	arr(a,n);
	getch();
}
void arr(int b[],int m)
{
	int i,n,c;
	cout<<endl<<"Enter the number you want to replace: ";
	cin>>n;
	cout<<endl<<"Enter the new number: ";
	cin>>c;
	for(i=0;i<m;i++)
	{
		if(b[i]==n)
		{
			b[i]=c;
		}
	}
	for(i=0;i<m;i++)
	{
		cout<<endl<<b[i];
	}
}