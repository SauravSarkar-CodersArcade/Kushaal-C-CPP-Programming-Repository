#include<stdio.h>
int main(){
    int a = 0;
    if(a > 0){
        printf("%d is a positive number.\n", a);
    }else if(a < 0){
        printf("%d is a negative number.\n", a);
    }else{
        printf("The number is equal to 0.\n", a);
    }
    return 0;
}