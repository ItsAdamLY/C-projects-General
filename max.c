#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
//constant #define

// declare dataType method()

int main()
{
	int x;
	float Deci_Num[SIZE], total, max;
	total = max = 0.0;
	
	for (x=0; x<SIZE; x++)
	{
		printf("Enter a float number (#%d) : " ,x+1);
		scanf("%f", &Deci_Num[x]);
		
		if (Deci_Num[x]>max)
		{
		max = Deci_Num[x];
		total += Deci_Num[x];
		}
	}

	printf("Highest : %.2f\n", max);
	printf("Total : %.2f\n", total);
	printf("Average : %.2f\n", total/SIZE);
 	system("pause");
	return 0;
}

//method here

