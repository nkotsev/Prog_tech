#include <stdio.h>
#include <math.h>
#define SIZE 10

int isprime(int cp){
	int i,bol=1;
	for (i=2;i<=cp;i++){
		if((cp%i)==0){
		bol=1;
		break;
		}
	}
	return bol;
	}

int main(){
    int x,i=2,ic=0,bol=1,arr[SIZE];

    double root;
    do{
    printf("Enter x:");
    scanf("%d",&x);
    }
    while ((x<0)||(x>SIZE));
	for (ic=0;ic<SIZE;ic++){
    	bol = 1;
    	while(bol==1){
    		if((isprime(i))&&((i%x)==0)){
    			arr[ic]==i;
    			i++;
	    			bol=0;
    			}
    		i++;	
    		}    
     	}
     	
    
    
    for (i=0;i<SIZE;i++) printf("Element %d = %d \n",i,arr[i]);
    
    
    
    system("PAUSE");
    return 0;
    }
