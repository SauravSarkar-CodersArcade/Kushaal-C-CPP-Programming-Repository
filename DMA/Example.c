#include<stdio.h>
int main(){
    int arr[5] = {1,2,3}; // 1 2 3 _ _ // 4 bytes
    // 8 bytes of memory is wasted by the user
    // IT industry - 1 byte = 1 rupee -> Cloud
    // fallback mechanism
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);    
    }
    printf("\n");
    int array[] = {1,2,3,4,5,6,7,8,9,0,9,8,7};
    int size = sizeof(array) / sizeof(array[0]); // 13x4 = 52 / 4 = 13
    // Formula For the dynamic size of array
    for (int i = 0; i < size; i++) // 10 [Static Value]
    {
        printf("%d ", array[i]);    
    }
    
    return 0;
}