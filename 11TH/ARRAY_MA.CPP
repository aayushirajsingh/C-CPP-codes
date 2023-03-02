#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[10],i,n,max=0;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<"Maxmimum Elelment: "<<max;
	getch();
}