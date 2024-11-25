#include<stdio.h>
int main(){
  /*int number[2];
	for (int i=0;i<2;i++){
		printf("enter the element of index: %d :",i);
		scanf("%d",&number[i]);
	}
	for (int i=0;i<2;i++){
		printf("%d\t",number[i]);
		
	}
	
	*/

  int number[5];
  int math,english,hindi,total;
  float per;
  
	for (int i=0;i<5;i++){
		printf("enter the marks of subject");
		printf("math");
		scanf("%d",&math);
		printf("english");
		scanf("%d",&english);
		printf("hindi");
		scanf("%d",&hindi);
		printf("%d\n",math);
		printf("%d\n",english);
		printf("%d\n",hindi);
		total=math+english+hindi;
		printf("total %d \n");
		per=total/3;
		printf("per %f\n",per);
	}
	
return 0;	
	
}
