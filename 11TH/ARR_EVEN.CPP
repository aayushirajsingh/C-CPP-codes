#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[10],i,n,odd=0,even=0;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	cout<<"Even elements: "<<even<<"\nOdd elements: "<<odd;
	getch();
}
