#include<iostream>
using namespace std;
int main(){
    string line;
    cout << "Enter 3 lines of your choice:" << endl;
    for(int i=0; i<3; i++){
        getline(cin, line);
        cout << "You entered: " << line << endl;
    }   
    return 0;
}
    