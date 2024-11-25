#include<stdio.h>
int main()
{
 int n;
 printf("enter the n");
 scanf("%d",&n);

 switch (n)
 {
    case 1:
    printf("1 is call");
    break;

    case 2:
    printf("2 is call");
    break;

    case 3:
    printf("3 is call");
    break;

    default:
    printf("default call");
    break;
 }
}