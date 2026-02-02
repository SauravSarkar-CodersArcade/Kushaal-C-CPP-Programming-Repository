#include<stdio.h>
int fact(int n){
    // Base case
    if (n == 0 || n == 1){
        return 1;
    }
    return n *  fact(n-1);
}
int main(){
    int n = 5;
    printf("The factorial of %d is %d\n", n, fact(n));
    return 0;
}