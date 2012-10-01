#include <stdio.h>

int main(){
    int x,i=0,arr[9],a=0,b=1,c=0;
    do{
    printf("Enter x:");
    scanf("%d",&x);
    }
    while ((x<0)||(x>=10));
    while (i<=9){
          c=a+b;
          a=b;
          b=c;   
          if ((c%x)== 0){
              arr[i]=c;
              i++;        
              }                     
          }
    for (i=0;i<=9;i++){
        printf("Element %d = %d \n",i,arr[i]);
        }
    system ("PAUSE");    
    return 0;
    }
