#include <stdio.h>
#include <stdlib.h>
//constant #define
#define DAYS 7

// declare dataType method()
int days_above_average = 0;
float temperatures[DAYS];

int main()
{
	days_above_average = TemperatureAnalysis();
	printf("The total number of days above average is : %d\n", days_above_average);
 	system("pause");
	return 0;
}

//method here
int TemperatureAnalysis()
{
	int i;
	float average = 0;
	for (i = 0; i < DAYS; i++)
	{
		printf("Input temperature for Day #%d : ", i+1);
		scanf("%f", &temperatures[i]);
		
		average += temperatures[i]/DAYS;
		if (temperatures[i] > 37.5) ++days_above_average;
	}
	printf("The average temperature for %d days is : %.f\n", DAYS, average);
	
	return days_above_average;
}
