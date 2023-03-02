#include<fstream.h>
#include<conio.h>
int main()
{
	clrscr();
	ofstream fout("Student",ios::out);
	char name[30],ch;
	float marks=0.0;
	for(int i=0;i<5;i++)
	{
		cout<<"Student "<<(i+1)<<"\nName: ";
		cin.get(name,30);
		cout<<"Marks: ";
		cin>>marks;
		cin.get(ch);
		fout<<name<<endl<<marks<<endl;
		cout<<endl;
	}
	fout.close();
	ifstream fin("Student",ios::in);
	fin.seekg(0);
	cout<<endl;
	for(i=0;i<5;i++)
	{
		fin.get(name,30);
		fin.get(ch);
		fin>>marks;
		fin.get(ch);
		cout<<"Student Name: "<<name;
		cout<<"\tMarks: "<<marks<<endl;
	}
	fin.close();
	return 0;
}