#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void selsort(int ar[],int size);
void bubsort(int a[],int size);
void main()
{
	clrscr();
	char ch1;
	int ch,a[10],n,i;
	cout<<"\n enter no of element ";
	cin>>n;
	cout<<"\n enter array";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	do
	{
		cout<<"\n 1 for selection sort";
		cout<<"\n 2 for bubble sort";
		cout<<"\n 3 for exit";
		cin>>ch;
		switch(ch)
		{
			case 1:
				selsort(a,n);
				break;
			case 2:
				bubsort(a,n);
				break;
			case 3:
				exit(0);
				break;
			default:
				cout<<"Invalid choice";
		}
		cout<<"Do you want to continue?(Y/N)";
		cin>>ch1;
	}
	while(ch1=='y'|| ch1=='Y');
}
//Bubble Sort.
void bubsort(int a[],int size)
{
	int temp,ctr=0;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		cout<<"Array: "<<++ctr<<"-is";
		for(int k=0;k<size;k++)
		cout<<a[k]<<" ";
		cout<<endl;
	}
}
//Selection sort.
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