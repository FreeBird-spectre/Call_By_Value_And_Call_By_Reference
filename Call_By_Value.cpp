// Name-Abir Seth
// EnTC A1
// PRN-24070123003

#include <iostream>
#include <cstdio>
using namespace std ; 

void swap_by_value(int a , int b){
    int temp = a; 
    a = b;
    b = temp; 
}

int main() {
  int a = 10;
  int b = 20;

    // Swap  by value
    printf("Swap by value : ");
    printf("\nNumbers before swaping : %d , %d " , a , b);
    swap_by_value(a,b);
    printf("\nNumbers after swaping : %d , %d " , a , b);
    return 0;
}

Swap by value : 
Numbers before swaping : 10 , 20 
Numbers after swaping : 10 , 20 

=== Code Execution Successful ===
