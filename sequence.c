#include <stdio.h>

int main()
{	
	int start,step_by,stop;
	printf("Input Start : ");
	scanf("%d", &start);
	
	printf("Input Step By : ");
	scanf("%d", &step_by);
	
	printf("Input Stop : ");
	scanf("%d", &stop);
	
	printf("The sequence is : \n");
	for (start; start<=stop; start=start+step_by){
		printf("%d ", start);
	}
	printf("\n");
	
 system("pause");
 return 0;
}

