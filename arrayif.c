#include <stdio.h>
#include <stdlib.h>
//constant #define
#define ROW 2
#define COL 3
// declare dataType method()

int main()
{
	int i,j;
	int Array1[ROW][COL]={{2,4,6},
						  {5,5,5}};
	int Array2[ROW][COL]={{3,4,5},
						  {5,5,8}};
	int Array3[ROW][COL]={0};
	
	for (i=0;i<ROW;i++)
	{
		for (j=0;j<COL;j++)
		{
			if (Array1[i][j]<Array2[i][j])
			{
				Array3[i][j]=-1;
			}
			else if (Array1[i][j]>Array2[i][j])
			{
				Array3[i][j]=1;
			}
			else
			{
				Array3[i][j]=0;
			}
			printf("%d ", Array3[i][j]);
		} 
		printf("\n");

	}
	
 	system("pause");
	return 0;
}

//method here

