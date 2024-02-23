#include <iostream>
#include <cmath>

// Función para calcular la suma de los divisores propios de un número
int sumaDivisores(int n) {
    int suma = 1; // Inicializamos con 1 porque 1 es divisor propio de todos los números
    int raiz = sqrt(n);
    for (int i = 2; i <= raiz; ++i) {
        if (n % i == 0) {
            suma += i;
            if (i != n / i) { // Verifica si i es diferente de n/i para evitar sumar el mismo divisor dos veces
                suma += n / i;
            }
        }
    }
    return suma;
}

// Función para verificar si dos números son amigos
bool numerosAmigos(int a, int b) {
    return (sumaDivisores(a) == b && sumaDivisores(b) == a);
}

int main() {
    int num1, num2;
    std::cin >> num1 >> num2;

    if (numerosAmigos(num1, num2)) {
        std::cout << "Si\n";
    } else {
        std::cout << "No\n";
    }

    return 0;
}
