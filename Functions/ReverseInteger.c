#include<stdio.h>
int reverse_integer(int n){
    int ans = 0;
    while(n > 0){
        int digit = n % 10;
        ans = ans * 10 + digit;
        n = n / 10;
    }
    return ans;
}
int main(){
    printf("123-> %d\n", reverse_integer(123));
    printf("120-> %d\n", reverse_integer(120));
    printf("432-> %d\n", reverse_integer(432));
}

