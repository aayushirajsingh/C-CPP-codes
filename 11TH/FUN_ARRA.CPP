#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	void arraydata(int[],int);
	int a[10];
	int i,n;
	cout<<endl<<"Enter N Number:";
	cin>>n;
	cout<<endl<<"Enter Elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	arraydata(a,n);
	getch();
}
void arraydata(int b[],int m)
{
	int i,total=0;
	for(i=0;i<m;i++)
	{
		total=total+b[i];
	}
	cout<<endl<<"Total is:"<<total;
}

