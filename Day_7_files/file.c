#include<stdio.h>
#include<strings.h>

struct student_data{
	char name[20];
	int age;
	char course[10];
	int roll;
	int marks;
};

int main(){
	int size;

	FILE*fp;
        char c[10];
        int age;
        fp=fopen("student_info.txt","w");

        if(fp==NULL){
                printf("no file exist");
        }

	printf("enter hom many students:");
	scanf("%d",&size);
	struct student_data s[size];
	for(int i=0;i<size;i++){
		        printf("enter you name:");
		        scanf("%s",s[i].name);
       			printf("enter your age:");
       			scanf("%d",&s[i].age);
			printf("course:");
			scanf("%s",s[i].course);
			printf("enter Roll:");
			scanf("%d",&s[i].roll);
			printf("enter marks:");
			scanf("%d",&s[i].marks);
	}
	fprintf(fp,"\nname\tage\tcourse\troll\tmarks\n");
	for(int i=0;i<size;i++){
		fprintf(fp,"%s\t%d\t%s\t%d\t%d\t\n",s[i].name,s[i].age,s[i].course,s[i].roll,s[i].marks);
	}


	fclose(fp);



	char p;
	fp=fopen("student_info.txt","r");
	while(1){
		p=fgetc(fp);
		if(p==EOF){
			break;
		}
		printf("%c",p);
	}


	fclose(fp);
	
	FILE *sp;
	sp=fopen("average_marks.txt","w");
	float sum=0;
	int a;
	for(a = 0;a<size;a++){
		sum=sum+s[a].marks;
	}

	sum=sum/a;
	printf("average of all student marks:%.2f",sum);
	fprintf(sp,"Average:%.2f",sum);
	return 0;
}
