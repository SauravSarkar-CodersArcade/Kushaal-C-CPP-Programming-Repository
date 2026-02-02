#include<stdio.h>
int fibonacci(int n){
    int p2 = 0, p1 = 1;
    if( n == 0) return p2;
    if( n == 1) return p1;
    for(int i=2; i<=n; i++){
        int curr = p2 + p1;
        p2 = p1;
        p1 = curr;
    }
    return p1;
}
int main(){
    int n;
    printf("Enter any number n:\n");
    scanf("%d", &n);
    printf("The Fibonacci Series till %d: ", n);
    for(int i=0; i<=n; i++){
        printf("%d ", fibonacci(i));
    } 
    return 0;
}