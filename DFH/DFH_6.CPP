#include<conio.h>
#include<fstream.h>
int main()
{
	clrscr();
	ofstream fout;
	fout.open("Marks.dat",ios::app);
	char ans='y';
	int rollno;
	float marks;
	while(ans=='y'||ans=='Y')
	{
		cout<<"Enter Rollno.: ";
		cin>>rollno;
		cout<<"Enter Marks: ";
		cin>>marks;
		fout<<rollno<<"\n"<<marks<<"\n";
		cout<<"Want to enter more records?(y/n)";
		cin>>ans;
	}
	fout.close();
	return 0;
}