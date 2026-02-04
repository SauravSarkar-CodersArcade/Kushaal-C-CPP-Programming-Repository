#include<stdio.h>
int sumOfDigits(int n){
    // Base Case
    if(n == 0){
        return 0;
    }
    return (n % 10) + sumOfDigits(n / 10);
}
int main(){
    int n = 1234;
    printf("Sum of digits is: %d\n", sumOfDigits(n));
}