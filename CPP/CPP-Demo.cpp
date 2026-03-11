#include<iostream>
int main(){
    printf("Hello\n");
    bool status = true;
    printf("%d\n", status);
    // namespace is a library or folder where 
    // we have some functions 
    std::cout << status << "\n";
    std::cout << "Hello" << "\n";
    std::cout << status << std::endl;
    std::cout << "Hello" << std::endl;
    return 0;

}