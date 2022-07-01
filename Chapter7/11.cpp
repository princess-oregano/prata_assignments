#include <stdio.h>
#include <stdlib.h>
#define ARTI 2.05
#define BEET 1.15
#define CAR 1.09
#define DISCOUNT 0.05
#define DIS_TH 100
#define SHIP1 6.50
#define SHIP2 14.00
#define SHIP_PER_P 0.50
#define SHIP_TH1 5
#define SHIP_TH2 20
int main()
{
	int beet, arti, carrot;       //total weight
	int a, b, c;                  //weight to add
	int pound;                    //total weight
	double cost, discount;        //cost of products and discount
	double shipping;              //cost of shipping
	double total;                 //total cost
	char ch, opt;

	arti = beet = carrot = 0;

	printf("****************************************************************\n"
               "             Welcome to the ABC Mail Order Grocery!             \n"
               "****************************************************************\n");
	printf("\nEnter the letter corresponding to the desired product or action:\n"
	       "a) artichokes\n"
	       "b) beats\n"
	       "c) carrots\n"
	       "f) finish the ordering process\n"
	       "q) exit the ordering process without saving\n");

	while(1)
	{
		ch = getchar();
		
		if('\n' == ch)
		continue;
		
		if (ch == 'f')
			break;	
		switch(ch)
		{
			case 'a':
				printf("How many pounds of artichokes would you like to add to the shopping cart?\n");
				printf("Current value: %d pound(-s).\n", arti);
				scanf("%d", &a);
				arti = arti + a;
				break;
			case 'b':
				printf("How many pounds of beet would you like to add to the shopping cart?\n");
				printf("Current value: %d pound(-s).\n", beet);
				scanf("%d", &b);
				beet = beet + b;
				break;
			case 'c':
				printf("How many pounds of carrots would you like to add to the shopping cart?\n");
				printf("Current value: %d pound(-s).\n", carrot);
				scanf("%d", &c);
				carrot = carrot + c;
				break;
			case 'q':
				printf("Exiting the ordering process...\n");
				exit(0);
			default:
				printf("Invalid input!\n");
		}
		while (getchar() != '\n')
		continue;

		printf("\nEnter the letter corresponding to the desired product or action:\n"
		       "a) artichokes\n"
		       "b) beats\n"
		       "c) carrots\n"
		       "f) finish the ordering process\n"
		       "q) exit the ordering process without saving\n");

	}
	pound = arti + beet + carrot;
	cost = arti * ARTI + beet * BEET + carrot * CAR; 
	if (cost > DIS_TH)
		discount = cost * DISCOUNT;
	else discount = 0;
	if (pound < SHIP_TH1) 
		shipping = SHIP1;
	else if (pound < SHIP_TH2)
		shipping = SHIP2;
	else shipping = SHIP2 + SHIP_PER_P*(pound - SHIP_TH2);

	total = cost - discount + shipping;

	printf("You ordered:\n"
	       "%d pound(-s) of artichokes (%.2lf$ per pound).\n"
	       "%d pound(-s) of beets (%.2lf$ per pound).\n" 
	       "%d pound(-s) of carrots(%.2lf$ per pound).\n", arti, ARTI, beet, BEET, carrot, CAR);
	if (discount > 0)
		printf("Your discount is %.2lf$.\n", discount);
	printf("In total, you ordered %d pound of vegetables.\n", pound);
	printf("The shipping charge is %.2lf$.\n", shipping);
	printf("The grand total of all charges is %.2lf$.\n", total);
	return 0;
}


