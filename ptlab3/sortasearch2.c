#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  
#include <stdint.h>
#include <string.h>
#include <time.h>
#define ARRAY_SIZE 10

int array[ARRAY_SIZE];



void GenerateArray(int *a){
    
    for (int i = 0; i < ARRAY_SIZE; i++)
        
        a[i] = rand();
    
}



void print(int *a){
    
    for (int i = 0; i < ARRAY_SIZE; i++){
        
        
        printf("%d - %d\n", i ,a[i]);
    }
}


void insertionSort(int *a)
{
    int i, key, j;
    for (i = 1; i < ARRAY_SIZE; i++) {
        key = a[i];
        j = i - 1;
 
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}



int My_Compare(const void *e1, const void *e2){
    

   if (e1 < e2){
        
        return -1;
    }
   
   if(e1 > e2){
       return 1;
       
    }

  if(e1 == e2){
       return 0;
       
    }
    
    return 0;
    
    
    
}



int main(){
    
    clock_t start_qs ,end_qs;
    clock_t start_cm, end_cm;
   
    srand(time(NULL));
   
    GenerateArray(array);
    print(array);

   
    start_qs = clock();
    
    qsort(array, ARRAY_SIZE, sizeof(int), My_Compare);
    
    end_qs = clock();
    
    printf("time: %ld\n", end_qs-start_qs);
    
   /*  
    start_cm = clock();
    
    insertionSort(array);
    
    end_cm = clock();
    
    
    printf("time: %ld\n", end_cm-start_cm);
    */
   
   
     print(array);
    return 0;
}
