#include<stdio.h>
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}
int main(){
    printf("The factorial of 5 is: %d\n", factorial(5));
    printf("The factorial of 0 is: %d\n", factorial(0));
    printf("The factorial of 1 is: %d\n", factorial(1));
}
