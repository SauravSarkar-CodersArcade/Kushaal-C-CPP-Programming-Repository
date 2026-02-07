#include<stdio.h>
int main(){
    // Base Example
    int x = 200;
    int * p = &x;

    printf("x = %d\n", *p);
    int a = 10;
    float b = 2.5;

    char c = 'K';

    void * ptr;

    ptr = &a;
    // Type casting to integer pointer (int*) ptr
    // But we need value -> * (int *) ptr
    printf("Integer value: %d\n", *(int *) ptr);

    ptr = &b;

    printf("Float value: %0.1f\n", *(float *) ptr);

    ptr = &c;
    printf("Character value: %c\n", *(char *) ptr);

}