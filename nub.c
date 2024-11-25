#include<stdio.h>
int main(){
	int i,num[5],a=0;
	for(i=0;i<5;i++){
		printf("entet the number %d", i);
		scanf("%d",&num[i]);
		a+=num[i];

	}
	printf("sum of number %d",a);
}