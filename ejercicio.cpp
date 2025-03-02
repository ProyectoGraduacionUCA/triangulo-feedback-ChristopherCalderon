#include <iostream>

using namespace std;

void imprimirTriangulo(int altura) {
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    // Declaración de variables
    int h1, h2, h3;

    // Pedir los valores al usuario
    cin >> h1 >> h2 >> h3;

    // Llamar la funcion
    imprimirTriangulo(h1);
    imprimirTriangulo(h2);
    imprimirTriangulo(h3);
    return 0;
}
