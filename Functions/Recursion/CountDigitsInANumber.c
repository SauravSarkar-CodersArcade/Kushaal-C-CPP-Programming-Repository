#include<stdio.h>

int count(int n){
    // Base Case
    if(n == 0){
        return 0;
    }
    return 1 + count(n / 10);
}
int main(){
    int n = 1234;
    printf("The no of digits is: %d\n", count(n));
    return 0;
}