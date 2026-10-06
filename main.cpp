#include <iostream>

using namespace std;

int main() {

    char tablero[3][3];

    // Inicializar la matriz con espacios vacios
    for (int fila = 0; fila < 3; fila++) {
        for (int columna = 0; columna < 3; columna++) {
            tablero[fila][columna] = ' ';
        }
    }

    // Ejemplo: colocar algunas fichas manualmente
    tablero[0][0] = 'X';
    tablero[1][1] = 'O';
    tablero[2][2] = 'X';

    // Pintar la matriz en consola
    cout << "\n      0   1   2\n\n";

    for (int fila = 0; fila < 3; fila++) {

        cout << "  " << fila << "   ";

        for (int columna = 0; columna < 3; columna++) {

            cout << tablero[fila][columna];

            if (columna < 2) {
                cout << " | ";
            }
        }

        cout << "\n";

        if (fila < 2) {
            cout << "     ---+---+---\n";
        }
    }

    cout << "\n";

    return 0;
}
