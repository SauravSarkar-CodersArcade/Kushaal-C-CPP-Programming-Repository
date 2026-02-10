#include<stdio.h>

int main(){
    int x = 10; // 0x2000
    printf("Hexa-Address of x using address operator: %p\n", &x);
    printf("Base-Address of x using address operator: %x\n", &x);
    int * ptr = &x;
    printf("Hexa-Address of x using pointer: %p\n", ptr); // 0x2000
    printf("Base-Address of x using pointer: %x\n", ptr);

    // De-referencing
    printf("Value of x using ptr: %d\n", *ptr);
    return 0;
}