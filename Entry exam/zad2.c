#include <stdio.h>

int main(){
    int i,x,y;
    int sum=0;
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
    for (i=x;i<=y;i++){
        if (i%17==0){
           sum=sum + i;          
           }
        }
    printf("sum=%d",sum);
    system ("pause");    
    return 0;
    }
