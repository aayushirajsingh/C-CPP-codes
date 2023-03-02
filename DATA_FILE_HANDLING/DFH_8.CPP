#include<fstream.h>
#include<conio.h>
struct Student
{
	int rollno;
	char name[40],grade;
	float marks;
	public:
	void getdata();
	void display();
};
void Student::getdata()
{
	char ch;
	cin.get(ch);
	cout<<"Enter Name: ";
	cin.getline(name,40);
	cout<<"Enter Grade: ";
	cin>>grade;
	cout<<"Enter Marks: ";
	cin>>marks;
	cout<<"Enter Rollno: ";
	cin>>rollno;
	cout<<endl;
}
void Student::display()
{
	cout<<"Name: "<<name<<"\t"
		<<"Grade: "<<grade<<"\t"
		<<"Marks: "<<marks<<"\t"
		<<"Rollno:"<<rollno<<"\t"<<"\n";
}
int main()
{
	clrscr();
	Student arts[3];
	fstream filin;
	filin.open("Stu.dat",ios::in|ios::out);
	if(!filin)
	{
		cout<<"Cannot open file!!\n";
		return 1;
	}
	cout<<"Enter Details for 3 Students\n";
	for(int i=0;i<3;i++)
	{
		arts[i].getdata();
		filin.write((char*) & arts[i],sizeof(arts[i]));
	}
	filin.seekg(0);
	cout<<"The contents of stu.dat are shown below.\n";
	for(i=0;i<3;i++)
	{
		filin.read((char*) & arts[i],sizeof(arts[i]));
		arts[i].display();
	}
	filin.close();
	getch();
	return 0;
}