#include<stdio.h>
int main(){
int age,birth_year,current_year=2024;

printf("enter the birth year");
scanf("%d",&birth_year);
age=current_year-birth_year;
printf("age is=%d",age);

if(age>=18){
	printf("you are aligible for voting");
}else{
	printf("you are not aligible for voting");
}
return 0;
}