#include<iostream>
using namespace std;
// Ambiguity -> Confusion
// Kushaal - Engineer - Yelahanka
namespace kushaal {
    int x = 200;
    void add(int a, int b){
    cout << a + b << endl;
}
}
// Saurav - R R Nagar
namespace saurav {
    int x = 500;
    void add(int a, int b){
    cout << a + b << endl;
    }
}
int main(){
    kushaal::add(10,20);
    saurav::add(100,200);
    int y = kushaal::x;
    cout << y << endl;
    return 0;
}

