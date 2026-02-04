#include<stdio.h>

void printEven(int n) {
    if (n == 0)
        return;

    printEven(n-1);
    if(n%2 == 0)
        printf("%d ", n);
}

int main(){
    int n;
    scanf("%d", &n);
    printEven(n);
    return 0;
}