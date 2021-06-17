#include <stdio.h>
#include <stdlib.h>
//constant #define
#define col 3
#define row 2

// declare dataType method()

int main()
{
	int Mat_A[row][col]={{2,3,5},{4,1,2}};
	int Mat_B[row][col]={{4,5,1},{3,4,7}};
	int Mat_C[row][col]={0};
	int i,j;
	
	for (i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			Mat_C[i][j]= Mat_A[i][j]*Mat_B[i][j];
		}
	}
		
	printf("Matrix C is : \n");
	for (i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ", Mat_C[i][j]);
		}
		printf("\n");
	}

 	system("pause");
	return 0;
}

//method here

