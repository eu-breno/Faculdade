#include <iostream>

using namespace std;

void foo(){
    static int n=0; // alocação estatica,
    // diferente do exemplo p07.cpp
    n++;
    cout  << n << endl;
}
int main(){
    foo();
    foo();
    foo();  
    return 0;
}