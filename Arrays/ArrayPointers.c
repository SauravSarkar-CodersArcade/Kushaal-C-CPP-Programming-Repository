#include<stdio.h>
int main()
{
    int arr[] = {2,8,9,6,1,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    // What happens if I print the name of the array ??????? 🤔
    // It prints the address of the first element
    // It means arr is actually a pointer variable 
    // It points to the address of the 1st elements inside the array

    for(int i=0; i<size; i++){
         printf("%p ", arr); // Prints 1st address 6 times
    }
    printf("\n");
    for(int i=0; i<size; i++){
         printf("%p ", (arr+i)); // Prints all the addresses
    }
    printf("\n");
    for(int i=0; i<size; i++){
         printf("%d ", *(arr) + i); // 1st element + i (0-5)
    }
    printf("\n");

    for(int i=0; i<size; i++){
         printf("%d ", *(arr+i)); // All the values
    }
    printf("\n");
    return 0;
}