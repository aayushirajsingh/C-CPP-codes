#include<iostream.h>
#include<conio.h>
void bubblesort(int[],int);
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
	bubblesort(ar,n);
	cout<<"\nThe sorted array is as shown below: ";
	for(i=0;i<n;i++)
	{
		cout<<endl<<ar[i];
	}
	getch();
}
void bubblesort(int ar[],int size)
{
	int tmp,ctr=0;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(ar[j]>ar[j+1])
			{
				tmp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=tmp;
			}
		}
		cout<<"\nArray after iteration- "<<++ctr<<" -is: ";
		for(int k=0;k<size;k++)
		{
			cout<<ar[k];
		}
	}
}