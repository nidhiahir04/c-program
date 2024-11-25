#include <stdio.h>

int main() {
char sml,cap;
printf("enter small alphabet");
scanf("%c",&sml);

cap=sml-32;
printf("equivelent of small %c is %c", sml,cap);

    return 0;
}