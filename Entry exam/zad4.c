#include<stdio.h>

int main(){
    int x,y,a=0,b=1,c,i;
    int bool=1;
    do {
    printf("Enter x:");
    scanf("%d",&x);
    printf("Enter y:");
    scanf("%d",&y);
    if (x>=y) {
       bool = 0;
       printf("Y must be larger than X.");}
       else bool = 1;
       
    }
    printf("Fibonacci numbers in the x/y range are :");
    for (i=0;i<=y;i++){
        c=a+b;
        a=b;
        b=c;
        if (c>=y){
           break;
           }
        if (c>=x){
           printf("%d ",c);       
          } 
        }
    printf("\n");
    system("PAUSE");
    return 0;
    }
