#include<stdio.h>
int sum(int n){
    // Base case
    if (n == 0){
        return 0;
    }
    return n + sum(n-1);
}
int main(){
    int n = 10;
    printf("The sum till %d is %d\n", n, sum(n));
    return 0;
}