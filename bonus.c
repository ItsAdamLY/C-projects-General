#include <stdio.h>
#include <stdlib.h>
//constant #define
#define ARSIZE 5
int marks[ARSIZE];
int newScore[ARSIZE];
// declare dataType method()
void Edit(int,int [ARSIZE]);
int GetScore(int, int [ARSIZE]);

int main()
{
	int bonus,i;
	do {
	printf("Enter a bonus mark : ");
	scanf("%d", &bonus);
	
	if (bonus < 0 || bonus > 100)
		printf("Error! Bonus mark must be within range (0-100)\n");
	} while (bonus < 0 || bonus > 100);
	
	Edit(bonus, marks);
		
	printf("The new score array is : ");
	for (i=0; i<ARSIZE; i++)
	{		
		printf("%d ", newScore[i]);
	}
	printf("\n");
	
 	system("pause");
	return 0;
}

//method here
void Edit(int bonus, int marks[ARSIZE])
{
	int i;
	printf("Enter 5 quiz scores : ");
	
	for (i=0; i<ARSIZE; i++)
	{
		do 
		{
			scanf("%d", &marks[i]);
			if (marks[i] < 0 || marks[i] > 100)
				printf("Error! Bonus mark must be within range (0-100)\nPlease re-enter score : ");
		} while (marks[i] < 0 || marks[i] > 100);
	}
	
	newScore[ARSIZE] = GetScore(bonus, marks);
}

int GetScore(int bonus, int marks[ARSIZE])
{
	int i;
	
	for (i=0; i<ARSIZE; i++)
	{	
		if (marks[i]+bonus > 100)
			newScore[i] = 100;
		else	 	
		newScore[i] = marks[i]+bonus;
	}
	return newScore[ARSIZE];
}
