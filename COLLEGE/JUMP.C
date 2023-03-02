#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1;
	clrscr();
	jump:
	printf("My name is Aayushi\n");
	i=i+1;
	if(i<=10)
	{
		goto jump;
	}
	printf("\nProgram to show jump");
	getch();
	return 0;
}