#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,sum=0,temp;
	cout<<"Enter a number: ";
	cin>>n;
	temp=n;
	while(n>0)
	{
		sum=sum*10+n%10;
		n/=10;
	}
	if(sum==temp)
	{
		cout<<"Palindrome.";
	}
	else
	{
		cout<<"Not A Palindrome.";
	}
	getch();
}