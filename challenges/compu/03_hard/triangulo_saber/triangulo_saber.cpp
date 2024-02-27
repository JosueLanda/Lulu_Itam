#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int height;
    cin >> height;

    // Declaración del triángulo de números
    vector<vector<int>> triangle(height);
    
    // Lectura del triángulo de números
    for (int i = 0; i < height; ++i) {
        triangle[i].resize(i + 1);
        for (int j = 0; j <= i; ++j) {
            cin >> triangle[i][j];
        }
    }

    for (int i = height - 2; i >= 0; --i) {
        for (int j = 0; j <= i; ++j) {
            triangle[i][j] += max(triangle[i+1][j], triangle[i+1][j+1]);
        }
    }

    // La suma máxima se encuentra en la cima del triángulo
    cout << triangle[0][0] << endl;

    return 0;
}
