#include<stdio.h>

int main(){

int salary;
float gross,hra,da;
printf("enter the employee salary");
scanf("%d",&salary);

if(salary>1 && salary<=5000){
    hra=salary*8/100;
	da=salary*20/100;
	gross=salary+hra+da;
	printf("gross salary in employee=%f",gross);
}else if(salary>5000 && salary<=10000){
    hra=salary*12/100;
	da=salary*30/100;
	gross=salary+hra+da;
	printf("gross salary in employee=%f",gross);
}else if(salary>10000 && salary<=15000){
    hra=salary*15/100;
	da=salary*40/100;
	gross=salary+hra+da;
	printf("gross salary in employee=%f",gross);
}else if(salary>=15000){
    hra=salary*20/100;
	da=salary*50/100;
	gross=salary+hra+da;
	printf("gross salary in employee=%f",gross);
}else{
printf("salary is not exepted");
}	









return 0;
}