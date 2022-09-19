#include <iostream>
using namespace std;

int main() {
	float ventas[2][3];
	int fila, columna;
	
	for (fila = 0; fila < 2; fila++) {
		for (columna = 0; columna < 3; columna++) {
			cout << "Ingrese un dato a la matriz: ";
			cin >> ventas[fila][columna];
		}
	}
	
	for (fila = 0; fila < 2; fila++) {
		for (columna = 0; columna < 3; columna ++) {
			cout << ventas[fila][columna] << endl;
		}
	}
	
	return 0;
}
