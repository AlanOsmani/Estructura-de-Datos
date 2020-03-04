#include<stdio.h>
#include <stdlib.h>

int main(){
    int dat, i;
    int *arr=NULL;
    
    arr=(int *)malloc(1*sizeof(int *));
    printf("Introduce el espacio ha ocupar en el arreglo: \t");
	scanf("%d",&dat);
	
	if(dat>100000000 ){
	printf("Fuera de rango");
	}
    
    else{
    arr=(int *)realloc(arr,dat*sizeof(int *));
    for(i=0; i<dat; i++){
        for(int j=0; j<=i; j++){
        *(arr+i)=i+1;
        printf("%d",(*(arr+j)));
            }
        printf("\n");
        }
    
    }

return 0;
}
