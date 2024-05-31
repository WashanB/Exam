
#include <iostream>
#include "variable.h"
#include "funciones.cpp" 
using namespace std; 

int matriz_multiplos_4_8[FILAS][COLUMNAS];
int matriz_multiplos_3[FILAS][COLUMNAS];
int matriz_suma[FILAS][COLUMNAS];

int main(){
    llenarMatrizMultiplos4y8();
    llenarMatrizMultiplos3();
    sumarMatrices();

    cout << "Matriz de múltiplos de 4 y 8:" << endl;
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << matriz_multiplos_4_8[i][j] << "\t";
            }

        cout << endl;
        }

    cout << "\nMatriz de múltiplos de 3:" << endl;
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << matriz_multiplos_3[i][j] << "\t";
        }
        cout << endl;
    }

    cout  <<  "\n Matriz suma: " << endl;
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << matriz_suma [i][j]  << "\t";
        }
        cout << endl;
    }

    return 0;
}


