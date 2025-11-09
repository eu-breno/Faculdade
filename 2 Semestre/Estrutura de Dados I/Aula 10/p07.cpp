#include <iostream>

using namespace std;

void foo(){
    int n=0; //alocação automatica
    n++;
    cout  << n << endl;
}
int main(){
    foo();
    foo();
    foo();  
    return 0;
}