#include<stdio.h>
 //void fun(int,int,int);
void fun(int *arr,int *min,int *max){
        int *min=arr[0];
        int *max=arr[0];

                for(int i=1;i<=10;i++){
                        if(arr[i]<*min){
                                *min=arr[i];
                        }
                        if(arr[i]>*max){
                                *max=arr[i];
                        }
                }
}

int main(){
	int arr[20]={1,2,3,4,5,6,7,8,9,0};
	int min1,max2;
	
	fun(arr,&min1,&max2);

	printf("min=%d,max=%d",min1,max2);
	return 0;
}



