#include<stdio.h>

int main(){
    int x,arr[99],i,c=0,in;
    do{
    printf("Enter x:");
    scanf("%d",&x);
    }
    while ((x>10)||(x<0));
    for (i=0;i<=99;i++){
        arr[i]=(rand()%100);
        }
    for (i=0;i<=99;i++){
        if ((arr[i]%10)==x){
           in=arr[i];
           arr[c]=arr[i];
           arr[i]=in;
           c++;
           }                                          
        }    
    for (i=0;i<=99;i++){
        printf(" %d ",arr[i]);
        }
    printf("\n");
    system("PAUSE");
    return 0;
    }
