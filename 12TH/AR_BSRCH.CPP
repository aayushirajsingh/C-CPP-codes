#include<iostream.h>
#include<conio.h>
int bsearch(int[],int,int);
void main()
{
	clrscr();
	int ar[50],index,n,item;
	cout<<"Enter array size (50 max): ";
	cin>>n;
	cout<<"Enter array elements (must be sorted in Ascending order): ";
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	cout<<"Enter element to be serached for: ";
	cin>>item;
	index=bsearch(ar,n,item);
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
int bsearch(int ar[],int size,int item)
{
	int beg,last,mid;
	beg=0;
	last=size-1;
	while(beg<=last)
	{
		mid=(beg+last)/2;
		if(item==ar[mid])
		{
			return mid;
		}
		else if(item>ar[mid])
		{
			beg=mid+1;
		}
		else
		{
			last=mid-1;
		}
	}
	return -1;
}