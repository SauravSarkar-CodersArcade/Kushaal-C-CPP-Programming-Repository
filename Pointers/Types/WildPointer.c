#include<stdio.h>
// 📌 Wild Pointers cause undefined (crazy) behaviour
int main(){
    int * ptr; // Wild Pointer

    // printf("%x", *ptr); ❌ Dangerous

    ptr = NULL;
    printf("Pointer initialized safely\n");

    return 0;

}