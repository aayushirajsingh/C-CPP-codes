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
	int i,max=0;
	for(i=0;i<m;i++)
	{
		cin>>b[i];
		if(b[i]>max)
		{
			max=b[i];
		}
	}
	cout<<"Max is: "<<max;
}



