#include <iostream>
using namespace std;

int main(){
    int N = 0;

    // Lectura de datos
    cin >> N; // Cantidad de globos
    
    int H[N]; // Alturas de los globos
    int popped[N]; // Si hemos tronado los globos

    for (int i = 0; i < N; i++){
        cin >> H[i]; // Leemos las alturas
        popped[i] = 0; // Iniciamos los globos como no tronados
    }

    // Simulación
    int height = 0; // Vamos a guardar la altura de la flecha
    int arrows = 0; // Contador de flechas
    for (int i = 0; i < N; i++){

        if(popped[i]){
            // Si ya tronamos el globo, lo saltamos
            continue;
        }

        arrows ++; // Si no, tenemos que tronarlo con una flecha
        height = H[i]; // Para tronarlo, la flecha debe estar a su altura
        
        //Simulación de la flecha
        for (int j = i; j < N ; j++){

            if(popped[j]){

                continue; // Si ya lo tronamos lo ignoramos

            }else if(height == H[j]) {
                // Si estamos a la altura del globo lo tronamos
                popped[j] = 1;
                height --; // La altura baja

            }

            if(height < 1){
                break; // Si la flecha ya llegó al suelo, rompemos esta simulación
            }
        }
    }
    
    // Imprime la solución
    cout << arrows<<endl;
    
    return 0;
}
