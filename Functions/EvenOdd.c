#include<stdio.h>
void even_odd(int);
void even_odd_adv(int);
int main(){
    even_odd(12);
    even_odd_adv(13);
    return 0;
}
void even_odd_adv(int n){
    if(n & 1){
    printf("%d is odd.\n", n);
    }else{
        printf("%d is even.\n", n);
    }
}
void even_odd(int n){
    if(((n / 2) * 2) == n){
        printf("%d is even.\n", n);
    }else{
        printf("%d is odd.\n", n);
    }
}