#include <stdlib.h>
#include <math.h>
#include <stdio.h>


int main()
{
//pass in number of points, pass out number of points(?)
char choice2;
double points=25;
do {
	int choice;
	
	char redeem;
	
	printf("\nyou have %lf points",points);
	do {
	printf("\nwould you like to\n1. redeem points for a coupon\n2. redeem points for a meal addition\n3. Go back\n");
	scanf("%d",&choice);
	}
	while (choice<1 || choice>3);
	
	
switch(choice)
{
	case 1:
		printf("you chose a coupon!\n");
		
		if (points>=10 && points<30)
		{
			printf("you are eligible for a 5%% discount. would you like to redeem?\nenter y for yes and n for no\n");
			scanf(" %c", &redeem);
			while (redeem=='y'||redeem=='Y')
			{
			scanf(" %c", &redeem);
			points=points-10;
			
			}
		}
		
		else if (points>=30 && points<50)
		{
			printf("you are eligible for a 10%% discount. would you like to redeem?\nenter y for yes and n for no\n");
			scanf(" %c", &redeem);
			while (redeem=='y'||redeem=='Y')
			{
			scanf(" %c", &redeem);
			points=points-30;
			
			}
		}
		
		else if (points<10)
		{
			printf("\nyou cannot redeem for a reward\n");
		}
		
		else
		{
			printf("you are eligible for a 15%% discount. would you like to redeem?\nenter y for yes and n for no\n");
			scanf(" %c", &redeem);
			while (redeem=='y'||redeem=='Y')
			{
				scanf(" %c", &redeem);
				points=points-50;
				
			}
		}
		break;
		
		
	case 2:
		printf("you chose a meal addition\n");
			if (points>=25 && points<50)
		{
			printf("you are eligible for a free drink. would you like to redeem?\nenter y for yes and n for no\n");
			scanf(" %c", &redeem);
			while (redeem=='y'||redeem=='Y')
			{
				scanf(" %c", &redeem);
				points=points-25;
		
			}
		}
		
		else if (points<25)
		{
			printf("\nyou cannot redeem for a reward\n");
		}
		
		else
		{
			printf("you are eligible for a free side. would you like to redeem?\nenter y for yes and n for no\n");
			scanf(" %c", &redeem);
			while (redeem=='y'||redeem=='Y')
			{
				scanf(" %c", &redeem);
				points=points-50;
				
			}
		}
		
		break;
	case 3:
		printf("you have been returned to main menu\n");
		
		break;
	}
	
	printf("you have %lf points remaining\n", points);
	printf("redeem another reward?\nenter y for yes or n for no");
	scanf(" %c", &choice2);
	
}

	while(choice2!='y' || choice2!='Y');
	
	return 0;
}



