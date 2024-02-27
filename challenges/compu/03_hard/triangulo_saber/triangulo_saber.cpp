#include <iostream>
#include <vector>

using namespace std;

int maxTotal = 0;

void backtrack(vector<vector<int>>& triangle, int row, int col, int currentTotal) {
    // Si alcanzamos la última fila, actualizamos el máximo total si es necesario
    if (row == triangle.size() - 1) {
        maxTotal = max(maxTotal, currentTotal + triangle[row][col]);
        return;
    }

    // Avanzamos hacia abajo y hacia la izquierda
    backtrack(triangle, row + 1, col, currentTotal + triangle[row][col]);

    // Avanzamos hacia abajo y hacia la derecha
    backtrack(triangle, row + 1, col + 1, currentTotal + triangle[row][col]);
}

int main() {
    int height;
    cin >> height;

    vector<vector<int>> triangle(height);
    for (int i = 0; i < height; ++i) {
        triangle[i].resize(i + 1);
        for (int j = 0; j <= i; ++j) {
            cin >> triangle[i][j];
        }
    }

    backtrack(triangle, 0, 0, 0);

    cout << maxTotal << endl;

    return 0;
}
