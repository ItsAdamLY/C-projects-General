#include <stdio.h>
#define TAX 0.15
#define HOUR_RATE 6.80

float GrossPay(float);
float IncomeTax(float);
float NettPay(float, float);
void Display(float, float, float, float);

int main()
{
	int option;
	float hours, gross, iTax, nett;
	printf("Welcome to PAYROLL REPORT\n\n\n");
	
	do
	{
		printf("Hours worked : ");
		scanf("%f",&hours);
		gross = GrossPay(hours);
		iTax = IncomeTax(gross);
		nett = NettPay(iTax,gross);
		Display(hours,gross,iTax,nett);
		
		printf("Do you want to continue? Press 0 to exit : ");
		scanf("%d", &option);
	} while (option!=0);
 system("pause");
 return 0;
}

float GrossPay(float hours)
{
	float OT, g;
	if (hours>40)
	{
		OT = (hours - 40)*1.5*HOUR_RATE;
		g = (40*HOUR_RATE)+OT;
	}
	else g = hours*HOUR_RATE;
	return g;
}

float IncomeTax(float gross)
{
	float i;
	i = TAX*gross;
	return i;
}

float NettPay(float iTax, float gross)
{
	float n;
	n= gross - iTax;
	return n;
}

void Display(float hours, float gross, float iTax, float nett)
{
	printf("\n\nEMPLOYEE INCOME REPORT\n\n");
	printf("Hours : %.2f\n", hours);
	printf("Gross Pay : RM%.2f\n", gross);
	printf("Income Tax : RM%.2f\n", iTax);
	printf("Nett Pay : RM%.2f\n\n", nett);
}
