// Name-Abir Seth
// EnTC A1
// PRN-24070123003

#include <iostream>
#include <cstdio>
using namespace std ; 

void swap_by_reference(int *x , int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
    
}
int main() {    
  
    int u = 22 , v = 30 ;
    printf("\n\nSwap by reference : ");
    printf("\nNumbers before swaping : %d , %d " , u, v);
    swap_by_reference(&u,&v);
    printf("\nNumbers after swaping : %d , %d " , u , v);
    return 0;
}

Swap by reference : 
Numbers before swaping : 22 , 30 
Numbers after swaping : 30 , 22 

=== Code Execution Successful ===
