#include<stdio.h>
#include<strings.h>

struct student_data{
	int emp_id;
	char name[20];
	int age;
	int date;
	int month;
	int year;
};

int main(){
	int size;

	FILE*fp;
        char c[10];
        int age;
        fp=fopen("student data.bin","wb");

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
			printf("enter Date of birth(DD-MM-YYYY):");
			scanf("%d-%d-%d",&s[i].date,&s[i].month,&s[i].year);
			printf("enter employee id:");
			scanf("%d",&s[i].emp_id);
	}
	fprintf(fp,"\nname\tage\t\tDOB\t\tEmployee id\n");
	for(int i=0;i<size;i++){
		fprintf(fp,"%s\t%d\t\t%d-%d-%d\t%d\n",s[i].name,s[i].age,s[i].date,s[i].month,s[i].year,s[i].emp_id);
	}
	fclose(fp);



	char p;
	fp=fopen("student data.bin","rb");
	while(1){
		p=fgetc(fp);
		if(p==EOF){
			break;
		}
		printf("%c",p);
	}


	fclose(fp);

	for(int i = 0;i<size;i++){
		if(s[i].age>35){
			printf("%s\n",s[i].name);
		}
	}
	return 0;
}
