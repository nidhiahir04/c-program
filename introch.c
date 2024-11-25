#include <stdio.h>

int main() {
  char ch;
  printf("enter the vowel value");
  scanf("%c",&ch);
  if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
      printf("a char is vowel");
  } else{
       printf("a char is not vowel");
  }

    return 0;
}