#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<unsigned long long> sieveOfEratosthenes(unsigned long long n) {
    // Creamos un vector para almacenar si un número es primo o no
    vector<bool> prime(n+1, true);
    vector<unsigned long long> primes;

    // Iteramos sobre los números empezando desde 2
    for (int p = 2; p * p <= n; p++) {
        // Si prime[p] es true, entonces es un número primo
        if (prime[p] == true) {
            // Actualizamos todos los múltiplos de p a false
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Guardamos los primos
    for (int p = 2; p <= n; p++) {
        if (prime[p])
            primes.push_back(p);
    }
    return primes;
}

bool busquedaBinaria(vector<unsigned long long>& arr, unsigned long long target){
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Si el elemento está en la mitad
        if (arr[mid] == target) {
            return true;
        }
        // Si el elemento es mayor, ignoramos la mitad izquierda
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        // Si el elemento es menor, ignoramos la mitad derecha
        else {
            right = mid - 1;
        }
    }

    // Si el elemento no está presente en el arreglo
    return false;

}

int main(){
    unsigned long long n;

    cin >> n;
    vector<unsigned long long> primos = sieveOfEratosthenes(n);

    unsigned long long p1=2, p2=2, p3=2; // Iniciamos los primos en 2
    unsigned long long f1=2, f2=2, f3=2;
    
    unsigned long long max_mul = (1<<64) -1;

    bool found = false;

    for(int i = 0; i< int(primos.size()); i++){
        p1 = primos[i];
        for(int j = i; j< int(primos.size()); j++){
            p2 = primos[j];
            p3 = n - p2 - p1;
            if(busquedaBinaria(primos, p3)){
                // cout<< p1 <<' '<<p2<<' '<<p3<<"\tmul: "<<p1*p2*p3<<endl;
                if(p1*p2*p3 < max_mul){
                    max_mul = p1*p2*p3;
                    f1 = p1;
                    f2 = p2;
                    f3 = p3;
                    found = true;
                }
            }
        }
        if(found){
            break;
        }
    }
    cout<< f1 <<' '<<f2<<' '<<f3<<endl;
    return 0;
}