#include<iostream.h>
#include<conio.h>
int lsearch(int[],int,int);
void main()
{
	clrscr();
	int ar[50],index,n,item;
	cout<<"Enter array size: ";
	cin>>n;
	cout<<"Enter array elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	cout<<"Enter element to be serached for: ";
	cin>>item;
	index=lsearch(ar,n,item);
	if(index==-1)
	{
		cout<<"Sorry!!Given element could not be found. ";
	}
	else
	{
		cout<<"Element found at index "<<index<<" ,position: "<<index+1<<endl;
	}
	getch();
}
int lsearch(int ar[],int size,int item)
{
	for(int i=0;i<size;i++)
	{
		if(ar[i]==item)
		{
			return i;
		}
	}
	return -1;
}