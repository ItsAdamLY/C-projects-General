#include <stdio.h>
#include <stdlib.h>
//constant #define

// declare dataType method()

char DisplayMenu();
void Stars();
void ViewBooks(int [], char* [], float []);
void SearchBookPrice(int [], char* [], float []);
void UpdateBookPrice(int [], char* [], float []);


int main()
{
	system("title ExcelPro BookStore Machine");
	int bookID[]={200, 300, 500, 540, 700};
	char* bookTitle[]={"Using Information Technology 12th Edition", "Beyond HTML", "Build your own PC",
						"Instant Java Servlets", "Digital Image : A Practical Guide"};
	char choice;					
	float bookPrice[]={100.30, 50.40, 47.00, 83.30, 22.90};
	
	printf("\tWELCOME TO EXCELPRO BOOKSTORE\n");
	do {
	printf("\n");	
	choice = DisplayMenu();
	printf("\n");
	
	switch (choice) 
	{
		case 'V' : case 'v' : 
			ViewBooks(bookID, bookTitle, bookPrice); 
			break;
		
		case 'S' : case 's' :
			SearchBookPrice(bookID, bookTitle, bookPrice);
			break;
			
		case 'U' : case 'u' :
			UpdateBookPrice(bookID, bookTitle, bookPrice);
			break;	
		
		default : break; //optional//					
	}
	} while (choice != 'E' && choice != 'e');
	printf("Thank you for using our system. Have a nice day!\n\n");
	
 	system("pause");
	return 0;
}

//method here
char DisplayMenu()
{
	char choice;

	Stars();
	printf("\nV: View Books  S: Search Book Price  U: Update Book Price  E: Exit\n");
	Stars();
	do {
	printf("\nEnter your choice (Enter letters only): ");
	scanf(" %c", &choice);
	
	if (choice != 'V' && choice != 'v' && choice != 'S' && choice != 's' && choice != 'U' && choice != 'u' &&
	choice != 'E' && choice != 'e')
		printf("Invalid choice.");
		
	} while (choice != 'V' && choice != 'v' && choice != 'S' && choice != 's' && choice != 'U' && choice != 'u' &&
	choice != 'E' && choice != 'e');
	
	return choice;
}

void Stars()
{
	int i;
	for (i = 0; i < 100; i++)
	{
		printf("*");
	}
}

void ViewBooks(int bookID[], char* bookTitle[], float bookPrice[])
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%d\t%s\t$%.2f\n", bookID[i], bookTitle[i], bookPrice[i]);
	}
}

void SearchBookPrice(int bookID[], char* bookTitle[], float bookPrice[])
{
	int i = 0, option, match = -1;
	
	Stars();
	printf("\nSearch by book ID\n");
	Stars();
	printf("\nEnter book ID: ");
	scanf("%d", &option);
	
	while (i < 5 && match == -1)
	{
		if (bookID[i] == option)
			match = i;
		else i++;	
	}
	
	if (match == -1)
		printf("Please refer to the customer service for assistance\n");
		
	else 
	{
		printf("The book ID is %d\n", option);
		printf("The price for %s is $%.2f\n", bookTitle[match], bookPrice[match]);
	}	
}

void UpdateBookPrice(int bookID[], char* bookTitle[], float bookPrice[])
{
	int i = 0, option, match = -1;
	float newPrice;

	printf("Enter book ID: ");
	scanf("%d", &option);
	
	while (i < 5 && match == -1)
	{
		if (bookID[i] == option)
			match = i;
		else i++;	
	}
	
	if (match == -1)
		printf("The book is not found. Please make sure the book ID is correct\n");
		
	else 
	{
		printf("The current price is $%.2f\n", bookPrice[match]);
		printf("Enter new price for (%s): $", bookTitle[match]);
		scanf("%f", &newPrice);
		
		bookPrice[match] = newPrice;
	}	
}

