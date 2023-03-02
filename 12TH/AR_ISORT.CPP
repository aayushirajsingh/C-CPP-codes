#include<iostream.h>
#include<conio.h>
#include<limits.h>
void inssort(int[],int);
void main()
{
	clrscr();
	int ar[50],n,index,item;
	cout<<"Enter array size: ";
	cin>>n;
	cout<<"Enter array elements: ";
	for(int i=1;i<=n;i++)
	{
		cin>>ar[i];
	}
	inssort(ar,n);
	cout<<"\nThe sorted array is as shown below: ";
	for(i=1;i<=n;i++)
	{
		cout<<endl<<ar[i];
	}
	getch();
}
void inssort(int ar[],int size)
{
	int tmp,j;
	ar[0]=INT_MIN;
	for(int i=1;i<=size;i++)
	{
		tmp=ar[i];
		j=i-1;
		while(tmp<ar[j])
		{
			ar[j+1]=ar[j];
			j--;
		}
		ar[j+1]=tmp;
		cout<<"\nArray after pass- "<<i<<" -is: ";
		for(int k=1;k<=size;k++)
		{
			cout<<ar[k]<<" ";
		}
	}
}