#include<iostream.h>
#include<conio.h>
void amount(float princ,int time=2,float rate=0.08);
void amount(float princ,int time,float rate)
{
	cout<<endl<<"Princial amount: "<<princ;
	cout<<endl<<"Time: "<<time<<" years.";
	cout<<endl<<"Rate: "<<rate;
	cout<<endl<<"Interest Rate: "<<(princ*time*rate)<<endl;
}
void main()
{
	clrscr();
	cout<<"Case 1";
	amount(2000);
	cout<<endl<<"Case 2";
	amount(2500,3);
	cout<<endl<<"Case 3";
	amount(2300,3,0.11);
	cout<<endl<<"Case 4";
	amount(2500,0.12);
	getch();
}