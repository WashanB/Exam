#include "variable.h"

void llenarMatrizMultiplos4y8() {
    int contador = 4;
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            matriz_multiplos_4_8[i][j] = contador;
            contador += 4;
        }
    }
}

void llenarMatrizMultiplos3() {
    int contador = 3;
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            matriz_multiplos_3[i][j] = contador;
            contador += 3;
        }
    }
}

void sumarMatrices() {
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            matriz_suma[i][j] = matriz_multiplos_4_8[i][j] + matriz_multiplos_3[i][j];
        }
    }
}
