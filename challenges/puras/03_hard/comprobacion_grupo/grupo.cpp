#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool asociativo(int n, vector<vector<int>> tabla);
int neutro(int n, vector<vector<int>> tabla);
bool inverso(int n, vector<vector<int>> tabla, int neu);

int main(){
    int n, aux;
    vector<vector<int>> tabla;

    /*
    Lectura
    */
    cin >> n;

    for(int i =0; i<n; i++){
        vector<int> v_aux;

        for(int j=0; j<n; j++){
            cin >> aux;
            v_aux.push_back(aux);
        }
        tabla.push_back(v_aux);
    }

    /*
    Comprobación
    */
    bool aso = asociativo(n, tabla);
    int neu = neutro(n, tabla);
    bool inv = inverso(n, tabla, neu);

    if(aso && (neu+1) && inv){
        cout << "SI" <<endl;
    }else{
        cout << "NO" <<endl;
    }

    return 0;
}

bool asociativo( int n, vector<vector<int>> tabla){
    for(int i = 0; i < n; i++){
        for(int j =0; j<n; j++){
            for(int k = 0; k<n; k++){
                
                int ij = tabla[i][j];
                int jk = tabla[j][k];
                
                if(tabla[ij][k] != tabla[i][jk]){
                    cout << "No es asociativo porque "<<endl;
                    cout<<"("<< i<<"*"<<j<<")*"<<k<<" = "<<ij<<"*"<<k<<" = "<<tabla[ij][k]<<endl;
                    cout<< i<<"*("<<j<<"*"<<k<<") = "<<i<<"*"<<jk<<" = "<<tabla[i][jk]<<endl;
                    return false;
                }
            }
        }
    }
    return true;
}

int neutro( int n, vector<vector<int>> tabla){
    for(int i = 0; i < n; i++){
        // Iniciamos suponiendo que es neutro
        bool esNeutro = true;
        int neutro;

        for(int j =0; j<n; j++){
            
            neutro = i;
            int ij = tabla[i][j];
            int ji = tabla[j][i];

            if(ij != j || ji != j){
                esNeutro = false;
                break;
            }
        }

        if(esNeutro){
            return neutro;
        }

    }
    cout << "No hay neutro"<<endl;
    return -1;
}

bool inverso(int n, vector<vector<int>> tabla, int neutro ){
    for(int i = 0; i < n; i++){
        // Iniciamos suponiendo que no tiene inverso
        bool esInv = false;

        for(int j =0; j<n; j++){
            
            int ij = tabla[i][j];
            int ji = tabla[j][i];

            if(ij == neutro && ji == neutro){
                esInv = true;
                break;
            }
        }

        if(!esInv){
            cout << i << " no tiene inverso"<<endl;
            return false;
        }

    }
    return true;
}