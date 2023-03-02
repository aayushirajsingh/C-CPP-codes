#include<stdio.h>
#include<conio.h>
int main()
{
	int a=1,b=0,c=0,i,n;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
	getch();
	return 0;
}