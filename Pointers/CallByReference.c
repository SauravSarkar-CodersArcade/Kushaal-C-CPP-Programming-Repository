#include<stdio.h>
void swap(int * a, int * b){
    printf("Before(Inside Swap): a=%d, b=%d\n", *a,*b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After(Inside Swap): a=%d, b=%d\n", *a,*b);
}
// Call by reference does update the address, so changes are seen
// Exact addresse of the variables are passed to the swap function.
// So, if it changes in (Swap), it will reflect inside (Main).
int main(){
    int a = 10;
    int b = 20;
    printf("Before(Inside Main): a=%d, b=%d\n", a,b);
    swap(&a,&b);
    printf("After(Inside Main): a=%d, b=%d\n", a,b);
    return 0;
}