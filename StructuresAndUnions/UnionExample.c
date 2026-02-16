#include<stdio.h>
#include<string.h>
union Employee
{
    // char name[20]; // Won't work in structures If we try fixed in main
    // char * name; // Use a Dynamic Array using pointers // 8 bytes
    char name[20]; // 20 bytes
    int age, empID; // 4+4 bytes
    char email[20]; // 20 bytes
};

int main(){
    // Kushaal as an employee : 
    // char name[20] = "Kushaal"; // Static String / Char Array // Fixed Size 
    union Employee emp1;

    // Rule for displaying data => Assign & Display 
    strcpy(emp1.name, "Kushaal");
    printf("Name: %s\n", emp1.name);
    emp1.age = 22;
    printf("Age: %d\n", emp1.age);
    strcpy(emp1.email, "k123@gmail.com");
    printf("Email: %s\n", emp1.email);
    printf("Size of striucture : %d Bytes.\n", sizeof(emp1));
    return 0;
}