#include <stdio.h>
int scanx(){
    int x,i,bol;
    do{
    printf("Enter x: ");
    scanf("%d",&x);
    if ((x<0)||(x>9)){
       bol=0;
       printf("X must be larger 0 and smaller than 10");               
       }       
       else bol = 1;
    }while (bol!=1);
    return x;
    }
    
    
int main(){
    int x,arr[10],narr[10],i=1,count;
    x=scanx();
    for (count=0;count<10;count++){
          while (1){
                if ((i%x)==0){
                   narr[count]=i;
                   i++;
                   break;
                }
                i++;    
             } 
          }
    for (i=0;i<=9;i++){
        for (count=0;count<=narr[i];count++){
            arr[i]=arr[i] + count;
            }
        
        
        
        }
    for (i=0;i<=9;i++){
        printf("Element %d = %d\n",i,arr[i]);
        }          
    system("PAUSE");
    return 0;
    }
