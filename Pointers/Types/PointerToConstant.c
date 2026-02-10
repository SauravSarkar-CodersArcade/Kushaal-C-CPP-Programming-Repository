#include<stdio.h>
int main(){
    int a = 10, b = 20; // 1000, 2000
    const int * ptr = &a;
    // *ptr = 15; // // ❌ Not allowed
    printf("%d\n", *ptr);
    ptr = &b; // Allowed 
    printf("%d\n", *ptr);
    return 0;
}
/*
Pointer can change to any other address
But, the value of the variable where it points cannot change 
*/