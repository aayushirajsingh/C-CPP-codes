#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n,a[10],arr(int[],int);
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<endl<<"Enter Elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<endl<<"Max element of array= ";
	arr(a,n);
	getch();
}
int arr(int b[],int m)
{
	int i,max=0;
	for(i=0;i<m;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
		}
	}
	return max;
}