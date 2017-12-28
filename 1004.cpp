#include<stdio.h>
#define Maxsize 12

typedef struct{
	float num;
}list;
list a[Maxsize];

int main(int argc, char *argv[]){
	int ii;
	float sum=0;
	float aver=0;
	for(ii=0;ii<=11;ii++){
		scanf("%f",&a[ii].num);
	} 
	for(ii=0;ii<=11;ii++){
		sum += a[ii].num;
	}
	aver = sum/12;
	printf("$%.2f",aver);
}
