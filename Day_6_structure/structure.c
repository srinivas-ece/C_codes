#include<stdio.h>
	struct student{
		int roll;
		char name[20];
		char sex[20];
		int exam;
	};


int main(){
	int size=0;
	struct student s[10];
	while(1){
	int n;
	printf("\tMenu\n1.Add student records\n2.View all student records\n3.Show student who gets the maximum score\n4.show student who gets minimum score\nselect your choice:");
	scanf("%d",&n);
	if(n==1)
	{
		printf("enter size od students: ");
		scanf("%d",&size);
		printf("%d",size);
	
	for(int i=0;i<size;i++)
		{
		printf("enter student roll no: ");
		scanf("%d",&s[i].roll);
		printf("enter student name: ");
		scanf("%s",s[i].name);
		printf("enter student sex: ");
                scanf("%s",s[i].sex);
		printf("enter student exam score: ");
                scanf("%d",&s[i].exam);
		printf("\n");
		}
	}
	else if(n==2)
	{
		for(int i=0;i<size;i++)
		{
                	printf("roll:%d\nname:%s\nsex:%s\nexam:%d",s[i].roll,s[i].name,s[i].sex,s[i].exam);
        	}
	}
	else if(n==3)
	{	
		
		int max=s[0].exam,update;
		for(int i=0;i<size;i++)
		{
			if(s[i].exam>max){
				max=s[i].exam;
			}
		}

		printf("\n %s got highest score:%d\n",s[update].name,max);
	}


	if(n==4){
		int min=s[0].exam,update;

                for(int i=0;i<size;i++)
                {
                        if(s[i].exam<min){
                                min=s[i].exam;
                                update=min;

                        }
                }
                printf("%sgot lowest score:%d",s[update].name,min);

	}
		
	}

	
	return 0;

	}
