#include<stdio.h>
void fiboncci(int n){
    int first=0, second=1,next,i;
    if(n>0){
        printf("%d",first);
    }
     if(n>1){
        printf("%d",second);
    }
    for(i=3;i<=n;i++){
        next=first+second;
        printf("%d",next);
        first=second;
        second=next;
    }
    printf("\n");
}
int main(){
    int n;
    printf("enter the number of terms");
    scanf("%d",&n);
    fiboncci(n);

   return 0; 
}