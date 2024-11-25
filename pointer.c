#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    //printf("%d\n"&a);

    int *ptr1;
    int *ptr2;
    ptr1=&a;
    ptr2=&b; 
    printf("%d\n",*ptr1);
    printf("%d\n",*ptr2);

    *ptr1=*ptr1+*ptr2;
    *ptr2=*ptr1-*ptr2;
    *ptr1=*ptr1-*ptr2;

    printf("after swaping value %d %d",*ptr1,*ptr2);
   
  
    

    return 0;
}