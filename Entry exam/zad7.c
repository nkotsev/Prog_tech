#include<stdio.h>
#include<math.h>
int main(){
    double c=0,arr[9];
    long long int x,i=0,p=1,cv;
    printf("Enter x:");
    scanf("%lld",&x);
    while (i<=9){
          cv=cos(p)*1000;
          if ((((int)cv) % 10)==x){
             arr[i] = p;
             i++;     
          }
          p++;      
    }
    printf("Array :\n");
    for (i=0;i<=9;i++){
        printf("Element %lld =%lld \n" ,i , arr[i]);
        }
    system("PAUSE");
    return 0;
    }
