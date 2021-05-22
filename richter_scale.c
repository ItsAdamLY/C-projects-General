#include <stdio.h>

int main()
{
	float richter_scale;
	printf("Enter a richter scale : ");
	scanf("%f", &richter_scale);
	if(richter_scale<5.0){
		printf("Little Damage\n");
	}
	if((richter_scale>=5.0)&&(richter_scale5.5)){
		printf("Some Damage\n");
	}
	if((richter_scale>=5.5)&&(richter_scale<6.5)){
		printf("Serious Damage\n");
	}
		if((richter_scale>=6.5)&&(richter_scale<7.5)){
		printf("Disaster\n");
	}
		if(richter_scale>=7.5){
		printf("Catastrophe\n");
	}
 system("pause");
 return 0;
}

