#include<stdio.h>
int main(){
    int math,english,hindi,total;
	float marks;
    printf("enter marks of math");
	scanf("%d",&math);
	printf("enter marks of english");
	scanf("%d",&english);
	printf("enter marks of hindi");
	scanf("%d",&hindi);
	total=math+english+hindi;
	marks=total/3;
	
	if(marks>75){
		printf("grade A");
	}else if(marks<75 && marks>=60){
		printf("grade B");
	}else if (marks<60 && marks>=45){
		printf("grade C");
	}else if(marks<45 && marks>=35){
		printf("grade D");
	}else{
		printf("faill");
	}
	







return 0;
}