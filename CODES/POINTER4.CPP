#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	struct date
	{
		short int dd,mm,yy;
	}
	join_dt={19,12,2006};
	date *dt_ptr;
	dt_ptr=&join_dt;
	cout<<"Printing structure elements using structure variable\n";
	cout<<"dd= "<<join_dt.dd<<", mm= "<<join_dt.mm<<", yy= "<<join_dt.yy<<endl;
	cout<<"Printing structure elements using structure pointer\n";
	cout<<"dd= "<<dt_ptr->dd<<", mm= "<<dt_ptr->mm<<", yy= "<<dt_ptr->yy<<endl;
	getch();
}