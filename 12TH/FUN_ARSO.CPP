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
	cout<<endl<<"Array arranged in ascending order: ";
	arr(a,n);
	getch();
}
void arr(int b[],int m)
{
	int i,j,temp;
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if (b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		cout<<endl<<b[i];
	}
}