#include <stdio.h>
#define SIZE 9

int main(){
    int x,i=0;
    long int arr[SIZE],a=0,b=1,c=0;
    do{
    printf("Enter x:");
    scanf("%d",&x);
    }
    while ((x<0)||(x>10));
    while (i<=SIZE){
          c=a+b;
          a=b;
          b=c;   
          if ((c%10)== x){
              arr[i]=c;
              i++;        
              }                     
          }
    for (i=0;i<=SIZE;i++){
        printf("Element %d = %ld \n",i,arr[i]);
        }       
    return 0;
    }
