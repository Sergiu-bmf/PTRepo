#include <stdio.h>

void printVector(int v[]){
     
    for(int i = 0; i < sizeof(&v); i++){
        
        printf(" %d ",v[i]);

        
    }
            printf("\n");
}
