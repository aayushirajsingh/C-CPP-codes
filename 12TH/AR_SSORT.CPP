#include<iostream.h>
#include<conio.h>
void selsort(int[],int);
void main()
{
	clrscr();
	int ar[50],n,index,item;
	cout<<"Enter array size: ";
	cin>>n;
	cout<<"Enter array elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	selsort(ar,n);
	cout<<"\nThe sorted array is as shown below: ";
	for(i=0;i<n;i++)
	{
		cout<<endl<<ar[i];
	}
	getch();
}
void selsort(int ar[],int size)
{
	int small,pos,tmp;
	for(int i=0;i<size-1;i++)
	{
		small=ar[i];
		pos=i;
		for(int j=i+1;j<size;j++)
		{
			if(ar[j]<small)
			{
				small=ar[j];
				pos=j;
			}
		}
		tmp=ar[i];
		ar[i]=ar[pos];
		ar[pos]=tmp;
		cout<<"\nArray after pass- "<<i+1<<" -is: ";
		for(j=0;j<size;j++)
		{
			cout<<ar[j];
		}
	}
}