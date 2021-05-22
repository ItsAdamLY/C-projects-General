#include <stdio.h>

int main()
{
	char status;
	int service_year;
	float salary;
	
	printf("Enter employee status :\n 'P' for Part-Time, 'F' for Full-Time : ");
	scanf(" %c", &status);
	
	while (status != 'F' || status != 'f' || status != 'P' || status != 'p'){
		printf("Error! Invalid status\n");
		printf("Please re-enter employee status : \n");
		scanf(" %c", &status);
	}
	
	printf("Enter years of service : ");
	scanf("%d", &service_year);
	
	printf("Enter current salary : RM ");
	scanf("%f", &salary);
	
	if (status == 'F' || status == 'f'){
		if (service_year<5){
			printf("Your new salary is RM %.2f\n", salary*1.04);
		}
		else{
			printf("Your new salary is RM %.2f\n", salary*1.05);
		}
	}
	else {
		if (service_year<5){
			printf("Your new salary is RM %.2f\n", salary*1.025);
		}
		else{
			printf("Your new salary is RM %.2f\n", salary*1.03);
		}
	}
	
 system("pause");
 return 0;
}

