#include <stdio.h>
#define COOKING_OIL 2.50
#define CURRY_POWDER 3.40
#define DETERGENT 8.50
#define POTATO_CHIPS 3.20

int main()
{
	int product,quantity,limit, a = 0,b = 0,c = 0,d = 0;
	float sum;
	char code;
	
	do {
	printf("Enter the number of products that you want to purchase (press 0 to exit) >> ");
	scanf("%d", &product);
	
	if (product<0) printf("Invalid value!\n");
	} while (product < 0);
	
	if (product != 0){
			for (limit = 1; limit <= product; limit++) { 
			do {
			printf("%d. Enter item code for the product that you want to buy >> ", limit);
			scanf(" %c", &code);
			
			printf("%d. Enter the quantity of item that you want to buy >> ", limit);
			scanf("%d", &quantity);
			} while (code != 'a' && code != 'A' && code !='b' && code !='B' && code !='c' && code !='C' && code != 'd' && code != 'D');
				
			switch(code){
				case 'A' : case 'a' : a = quantity; break;
				case 'B' : case 'b' : b = quantity; break;
				case 'C' : case 'c' : c = quantity; break;
				case 'D' : case 'd' : d = quantity; break;
			}
		}
			
			sum = COOKING_OIL*a + CURRY_POWDER*b + DETERGENT*c + POTATO_CHIPS*d;
			
			printf("The total price is RM %.2f\n",sum);
	}
	
 system("pause");
 return 0;
}

