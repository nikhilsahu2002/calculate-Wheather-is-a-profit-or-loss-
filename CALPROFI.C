#include<stdio.h>
#include<conio.h>
void main()
{
int amount=0,sale=0,result=0;
clrscr();
printf("Enter The Amount");
scanf("%d",&amount);
printf("Enter saling price");
scanf("%d",&sale);
result = (sale - amount);
	if (result >amount)
		printf(" Loss");
	else
		printf("Profit");
getch();
}