/* 
	Name: Mohammad Adam Danial Bin Rosmani	 Matric No: 201186
	Program description: 
		Drink Prices Calculator - To calculate the total prices of drinks
		bought from Maju Drinks Company.
*/


#include <stdio.h>
#include <stdlib.h>

// Global variable declaration//
char* drink_names[50]={"Apple Juice", "Full Milk", "Vanilla", "Peach", "Mountain Dew", "Pepsi"};
char* package_types[10]={"1 dozen", "2 dozen", "10 dozen"};
char response;

int quantity, count, choice_drink, choice_package;

float sales;
float sales_discount;
float total_sales;

// 2D Array //
float drink_price[6][3] = {{16.00,30.00,145.00},
							{15.50,28.00,138.00},
							{17.00,33.00,160.00},
							{17.90,34.50,168.00},
							{18.00,35.00,170.00},
							{20.00,39.00,190.00}};
												 
// User-Defined Function Declaration //
void ChooseDrink();
void GetPackage();
int GetQuantity();
float ProcessOrder(int, int, int);

int main()
{
	char response;
	
	system("title ~~ Maju Drinks Drink Prices Calculator ~~");
	printf("***WELCOME TO MAJU DRINK WORLD***\n");
	
	do {
	ChooseDrink();
	GetPackage();
	quantity = GetQuantity();
	sales = ProcessOrder(quantity, choice_drink, choice_package);
	total_sales += sales;
		
	printf("\nConfirmation of order:\n");
	printf("%d pack(s) of %s package of %s drink\n", quantity, package_types[choice_package-1], drink_names[choice_drink-1]);
	printf("Amount to pay is RM %.2f\n", sales);	
	
	do {
	printf("\nDo you want to order another drink? ");
	scanf(" %c", &response);
	
	if (response != 'Y' && response != 'y' && response != 'N' && response != 'n')
		printf("Sorry, wrong choice! Try again\n");
		
	} while (response != 'Y' && response != 'y' && response != 'N' && response != 'n');
	
	} while (response == 'Y'|| response == 'y');
		
	
	printf("\nTotal Sales \t: RM %.2f\n", total_sales);	
		
	if (total_sales >= 100.00)
		sales_discount = total_sales * 10.0/100.0;
			
	printf("Discount @10% \t: RM %.2f\n", sales_discount);
	printf("\nAMOUNT TO PAY \t: RM %.2f\n", total_sales-sales_discount);	
	
 	system("pause");
	return 0;
}

//method here
void ChooseDrink()
{
	do {
	printf("\nYou may choose from the following flavours:\n\tFLAVOUR\n");
	
	for (count = 0; count < 6; count++)
	{
		printf("%d. %s\n", count+1, drink_names[count]);
	}
	
	printf("\nEnter your choice: ");
	scanf("%d",&choice_drink);
	
	if (choice_drink < 1 || choice_drink > 6)
		printf("Sorry, wrong choice! Try again\n");
	else 
	{
		printf("You have chosen %s drink\n", drink_names[choice_drink-1]);
	}	
	} while (choice_drink < 1 || choice_drink > 6);
}

void GetPackage()
{
	printf("\nAvailable packages: ");
	
	for (count = 0; count < 3; count++)
	{
		printf("%d) %s ", count+1, package_types[count]);
	}
	
	do {
	printf("\nEnter which package (1 or 2 or 3): ");
	scanf("%d",&choice_package);
	
	if (choice_package < 1 || choice_package > 3)
		printf("Sorry, wrong choice! Try again\n");

	} while (choice_package < 1 || choice_package > 3);
}

int GetQuantity()
{
	printf("\nEnter quantity: ");
	scanf("%d", &quantity);
	
	if (quantity < 0)
		quantity = abs(quantity);
	
	return quantity;
}

float ProcessOrder(int quantity, int choice_drink, int choice_package)
{
	sales = quantity * drink_price[choice_drink-1][choice_package-1];
	
	return sales;
} 
