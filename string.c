#include<stdio.h>
int main(){
	char string1[]="skill";
	char string2[]="qode";
	char string3[50];
	int len=0;
	
	for(int i=0;i<5;i++,len++){
		string3[len]=string1[i];
	}for(int j=0;j<5;j++,len++){
		string3[len]=string2[j];
	}
	printf("the string is= %s",string3);
	
	
}