#include <stdio.h>  
  
int main() {  
    int counter, N;   
    /* 
     * Take a number as input from user 
     */  
    printf("Enter a Number\n");  
    scanf("%d", &N);  
  
    printf("Factors of %d\n", N);  
    
    /*Check for every number between 1 to N, 
   whether it divides N */
    for(counter = 1; counter <= N; counter++) {   
        if(N%counter == 0) {  
            printf("%d ", counter);  
        }  
    }  
  
    return 0;  
}
