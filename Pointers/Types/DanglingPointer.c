#include<stdio.h>
// Scope-2
// Function Pointer
int * function(){
    static int x = 10; // 0x2000 // Globally accessible in the file
    return &x; // 0x2000
}

// Scope-1
int main(){
    // This is a Dangling Situation
    // Pointer is trying to access an address from a different scope
    // The address is either unavailable, or deleted, or not scoped 
    int * ptr = function(); // 0x2000 
    printf("The value of x is: %d\n", *ptr);
}