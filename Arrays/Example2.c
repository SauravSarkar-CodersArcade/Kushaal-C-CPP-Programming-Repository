#include<stdio.h>
int main(){
    int arr[5] = {22,-3,4}; // { 22, -3, 4, _, _};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
}