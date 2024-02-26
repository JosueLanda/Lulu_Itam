#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    float phi = (1+sqrt(5))/2;

    float numerador = n-1 + log10(sqrt(5));
    float divisor = log10(phi);

    cout << ceil(numerador/divisor) << endl;
    return 0;
}