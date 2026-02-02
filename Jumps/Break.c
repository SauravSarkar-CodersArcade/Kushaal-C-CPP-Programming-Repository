#include<stdio.h>
int main(){
    for(int i=1; i<5; i++){
        if(i == 3){
            break; // This will terminate the loop
        }
        printf("%d ", i);
    }
    // Comes Here
    return 0;
}