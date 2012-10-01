#include<stdio.h>
#include<math.h>

int main(){
	int c=1,i=0,x,arr[9],ic,bool;
	double root;
    do{
    printf("Enter x:");
    scanf("%d",&x);
    }
    while (x<0);
    while ((i<=9)&&(c<=x)){
        if ((x%c)==0){
        	arr[i]=c;
            i++;
        }
        c = c+2;
        
    }
    printf("Array: \n\n");
    for (i=0;i<=9;i++){
        if (arr[i]!=0)
        printf("Element %d = %d \n",i,arr[i]);
    }
    printf("\nPrime numbers:\n\n");
    for (i=0;i<=9;i++){
        bool=1;
        root=sqrt(arr[i]);
        for (ic=2;ic<=root;ic++){
            if (arr[i]%ic==0){
               bool=0;
               break;                  
            }
            }
        if ((bool==1)&&(arr[i]!=0)){
           printf("Element %d : %d\n",i,arr[i]);             
        }
        
        }
    printf("\n");    
    system ("PAUSE");   
	return 0;
}
