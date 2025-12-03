#include<stdio.h>
int main()
{
	int array1[3][3]={{1,2,3},{1,2,3},{1,2,3}};
	int array2[3][3]={{1,2,3},{1,2,3},{1,2,3}};
	int array3[3][3];
	for(int i =0;i<3;i++){
		for(int j =0;j<3;j++)
		{
		array3[i][j]=0;
		  for(int k=0;k<3;k++)
		  {
			array3[i][j]+=array1[i][k]*array2[k][j];
		  }
	
			printf("%d\t",array3[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
