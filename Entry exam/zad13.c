#include<stdio.h>

int main(){
    int x=0,i=0,ic=0;
    long int arr[9],sum=0;
    do{
    printf("Enter x:");
    scanf("%d",&x);
    }
    while ((x<1)||(x>10));
    for (i=0;i<=9;i++){
        for (ic=0;ic<1000;ic++){
            if ((ic%((i+1)*x))==0){
              sum+=ic;
              }             
        }
    arr[i]=sum;
    }
    for (i=0;i<=9;i++){
        printf("Element %d : %d\n",i,arr[i]);
        }
    system("Pause");
    return 0;
}
    
