#include <iostream>
#include <algorithm>

using namespace std;

bool ordena(double a, double b){
    return a < b;
}

int main(){
    const int N = 5;
    double v[N]= { 9.5, 1.7, 8.3, 2.8, 3.0};
    sort(v,v+N,ordena);/// Ordenação
    for (int i =0; i<N; i++){
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}