#include<iostream.h>
#include<conio.h>
class Emp
{
	int Eno;
	char Name[20];
	float marks;
	public:
	void getdata();
	void display();
	int retno()
	{
		return Eno;
	}
};
void Emp::getdata()
{
	cout<<"Enter Name: ";
	cin>>Name;
}
void Emp::display()
{
	cout<<"Name: "<<Name;
}Emp e;
fstream emp;
int main()
{

	int ch;
	char ch1;
	do
	{
		cout<<"1.Add Record\n2.Display all records\n3.Search Records\n4.Exit";
		cin>>ch;
		switch(ch)
		{
			case 1:
				addrec();
				break;
			case 2:
				serrec();
				break;
			case 3:
				desprec();
				break;
			case 4:
				exit(0);
				break;
			default:
				cout<<"Invalid Choice!!";
		}
		cout<<"Do you Want to Continue?(Y/N)";
		cin>>ch1;
	}while(ch1=='y'||ch1=='Y')
}
void addrec()
{

	char op="y";
	emp.open("Employee.dat",ios::out|ios::in|ios::binary|ios::app);
	while(ch='y'||ch=='Y')
	{
	e.getdata();
	emp.write((char*)&e,sizeof(e));
	cout<<"Want to continue: ";
	cin>>op;
	emp.close();
}
void serrec()
{
	 int rn;
	char found='n';
	ifstream fin("Employee.dat",ios::in);
	cout<<"Enter rollno to be searched for: ";
	cin>>rn;
	while(!fin.eof())
	{
		fin.read((char*) &e,sizeof(e));
		if(e.rollno==rn)
		{
			cout<<e.name;
			found='y';
			break;
		}
	}
	if(found=='n')
		cout<<"Rollno not found in file!";
	fin.close();
	return 0;
}
void disprec()
{

}
