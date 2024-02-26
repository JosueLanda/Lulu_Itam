#include <iostream>
#include <vector>

using namespace std;

vector<int> factorizarPrimos(int n) {
    vector<int> factores;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            factores.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factores.push_back(n);
    }
    return factores;
}

int main() {
    int numero;
    cin >> numero;

    vector<int> factores = factorizarPrimos(numero);

    for (int i = 0; i < factores.size(); ++i) {
        cout << factores[i];
        if (i != factores.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
