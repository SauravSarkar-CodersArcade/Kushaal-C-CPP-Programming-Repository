#include<stdio.h>
int main(){
    int x = 10;
    // It is recommended not to use %d for addresses
    printf("The hexa-address of x using address operator is: %p\n", &x);
    printf("The base-address of x using address operator is: %x\n", &x);
    int * ptr = &x;
    printf("The hexa-address of x using pointer is: %p\n", ptr);
    printf("The base-address of x using pointer is: %x\n", ptr);
    // De-referencing - The process of extracting value using pointer variable
    printf("The value of x using pointer: %d\n", *ptr); 
    int ** dPtr = &ptr;
    printf("The hexa-address of ptr using pointer is: %p\n", &ptr);
    printf("The base-address of ptr using double-pointer is: %x\n", dPtr);
    printf("The value of x using double-pointer: %d\n", **dPtr); 
    printf("%d\n", *(&x)); // &x = ptr -> *ptr - > so value 
    return 0;
}