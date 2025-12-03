#include<stdio.h>
#define students 5
#define subject 4
int main()
{
	int student[students][subject];
	for(int i=0;i<=students-1;i++)
	{
		for(int j=0;j<subject;j++)
		{
			int a=1;
			printf("Enter marks for student-%d: ",i+a);
			scanf("%d",&student[i][j]);
		}
	}


	printf("Marks Entered\n");
	printf("Student\t|subject-1\t|subject-2\t|subject-3\t|subject-4\t|\n");
	//printf("\n--------------|----------|-------------|------------|-----------|\n");
	for(int i=0;i<=students-1;i++)
	{
		printf("%d",i+1);
		for(int j=0;j<subject;j++)
		{
			printf("\t%d\t",student[j][i]);
		}
			printf("\n");
		
	} 


	for(int i=0;i<subject;i++)
	{
		int temp=0;
		for(int j =0;j<students;j++)
		{
			if(student[i][j]>temp)
			{
			    temp=student[i][j];
			}
		}
			printf("Highest marks is %d\t\n",temp);
	}
	return 0;
}
