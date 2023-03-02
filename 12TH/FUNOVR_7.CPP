#include<iostream.h>
#include<conio.h>
void amount(float princ,int time,float rate)
{
	cout<<endl<<"Principal Amount: "<<princ;
	cout<<"\tTime: "<<time<<" years.";
	cout<<"\tRate: "<<rate;
	cout<<endl<<"Interest Amount: "<<(princ*time*rate);
}
void amount(float princ,int time)
{
	cout<<endl<<"Principal Amount: "<<princ;
	cout<<"\tTime: "<<time<<" years.";
	cout<<"\tRate: 0.08 ";
	cout<<endl<<"Interest Amount: "<<(princ*time*0.08);
}
void amount(float princ,float rate)
{
	cout<<endl<<"Principal Amount: "<<princ;
	cout<<"\tTime: 2 years.";
	cout<<"\tRate: "<<rate;
	cout<<endl<<"Interest Amount: "<<(princ*2*rate);
}
void amount(int time,float rate)
{
	cout<<endl<<"Principal Amount: 2000";
	cout<<"\tTime: "<<time<<" years.";
	cout<<"\tRate: "<<rate;
	cout<<endl<<"Interest Amount: "<<(2000*time*rate);
}
void amount(float princ)
{
	cout<<endl<<"Principal Amount: "<<princ;
	cout<<"\tTime: 2 years.";
	cout<<"\tRate: 0.08";
	cout<<endl<<"Interest Amount: "<<(princ*2*0.08);
}
void main()
{
	clrscr();
	cout<<"Case 1";
	amount(2000.0F);
	cout<<endl<<"\nCase 2";
	amount(2500.0F,3);
	cout<<endl<<"\nCase 3";
	amount(2300.0F,3,0.11F);
	cout<<endl<<"\nCase 4";
	amount(2,0.12F);
	cout<<endl<<"\nCase 5";
	amount(6,0.07F);
	getch();
}