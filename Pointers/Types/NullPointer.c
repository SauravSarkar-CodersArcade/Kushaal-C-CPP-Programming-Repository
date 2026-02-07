#include<stdio.h>
// Use case: To check whether a pointer is safely initialized or not
int main(){
    int * ptr = NULL;

    if(ptr != NULL){
        printf("Continue with logic!");
    }else{
        printf("Pointer is NULL.\n");
    }
    return 0;
}