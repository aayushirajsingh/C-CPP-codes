#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[10],i,n;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"\nEnter "<<n<<" elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nArray Elements: ";
	for(i=0;i<n;i++)
	{
		cout<<endl<<a[i];
	}
	getch();
}