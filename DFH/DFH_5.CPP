#include<fstream.h>
#include<conio.h>
int main()
{
	clrscr();
	ofstream filout;
	filout.open("Marks.dat",ios::out);
	char ans='y';
	int rollno,marks;
	while(ans=='y'||ans=='Y')
	{
		cout<<"Enter Rollno.: ";
		cin>>rollno;
		cout<<"Enter Marks: ";
		cin>>marks;
		filout<<rollno<<"\n"<<marks<<"\n";
		cout<<"Want to enter more records?(y/n)";
		cin>>ans;
	}
	filout.close();
	return 0;
}