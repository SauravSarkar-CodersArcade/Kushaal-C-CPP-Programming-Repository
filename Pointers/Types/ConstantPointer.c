#include<stdio.h>
#define PI 3.14 // MACRO
#define MAX_SIZE 200
int main(){
    int a = 10, b = 20; // 1000, 2000
    int *const ptr = &a;
    *ptr = 15; 
    printf("%d\n", *ptr);
    // ptr = &b; // ❌ Not allowed
    return 0;
}
/*
When we want to point to the address of any fixed variable
Pointer cannot change to any other address
But, the value of the variable where it points can change 
*/