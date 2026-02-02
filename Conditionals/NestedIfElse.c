#include<stdio.h>
int main(){
    int a = 29;
    if(a % 2 == 0){
        if(a % 4 == 0){
            printf("%d is even & div by 4.\n", a);
        }else{
            printf("%d is even & not div by 4.\n", a);
        }  
    }else{
        if(a % 3 == 0){
            printf("%d is odd & div by 3.\n", a);
        }else{
            printf("%d is odd & not div by 3.\n", a);
        } 
    }
    return 0;
}