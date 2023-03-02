#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[10],i,j,n,temp;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"\nEnter array elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Sorted Array in acending order: ";
	for(i=0;i<n;i++)
	{
		cout<<endl<<a[i];
	}
	getch();
}