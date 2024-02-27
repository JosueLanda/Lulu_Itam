#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int mat[3][3];
    int power;
    // Lectura
    cin >> power;

    for(int i = 0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> mat[i][j];
        }
    }

    // Determinante
    long long det = 0;
    for (int i = 0; i < 3; i++) {
        det += (mat[0][i] * (mat[1][(i + 1) % 3] * mat[2][(i + 2) % 3] - mat[1][(i + 2) % 3] * mat[2][(i + 1) % 3]));
    }
    
    // Potencia
    long long res = det;
    for(int i = 1; i<power; i++){
        res *= det;
        res %= (1<<20-1);
    }
    cout << res << endl;

    return 0;
}