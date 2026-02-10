#include<stdio.h>
int main(){
    double d = 20.25; // 8 bytes
    int i = (int) d; //Manual Conversion 
    printf("%d\n", d);
    // ============================= //
    void * ptr;
    int x = 20; // 1000
    char c = 'c'; // 2000
    ptr = &x; // 1000
    printf("%d\n", *(int *)ptr);
    ptr = &c;
    printf("%c\n", *(char *)ptr);
    return 0;
}
