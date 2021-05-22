#include <stdio.h>

int main()
{
	int r,c,A,B;
	
	printf("Input row (1-12) (Press 0 to exit) : ");
	scanf("%d", &A);
	
	while (A != 0) {
		while (A<0 ||A>12) {
		printf("Invalid!\nInput row (1-12) (Press 0 to exit) : ");
		scanf("%d", &A);
		
		if (A==0){
			system("pause");
			return 0;
		}
	}
	
	printf("Input column (1-12) (Press 0 to exit) : ");
	scanf("%d", &B);
	
	if (B != 0) {
		while (B<0 || B>12) {
		printf("Invalid!\nInput column (1-12) (Press 0 to exit) : ");
		scanf("%d", &B);
		
		if (B==0) {
			system("pause");
			return 0;
		}
	}} else {
		 system("pause");
 		 return 0;
		}
	
	
	for (r=1; r <= A; r++) {
		printf("\n");
		for (c=1; c <= B; c++){
			printf("%d\t", c*r);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("Input row (1-12) (Press 0 to exit) : ");
	scanf("%d", &A);
	}
	
 system("pause");
 return 0;
}

