//Program to check whether a character is vowel or constant.
#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	char a;
	cout<<"Enter a character: ";
	cin>>a;
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		cout<<"The character is vowel.";
	}
	else
	{
		cout<<"The character is not a vowel.";
	}
	getch();
}
