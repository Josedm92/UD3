//Programa que hace el combinatorio de dos números usando funciones.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Creación de las funciones
int factorial (int n) {
	int i;
	int acu=1;
	for (i=2; i<=n; i++) {
		acu=acu*i;
	}
	
	return acu;
}

int combinatorio (int num1, int num2) {
	return factorial(num1)/factorial(num2)*factorial(num1-num2);
}

//Inicio del programa.
int main () {
	int num1=0, num2=0; //Declaración de variables.
	
	//Pedimos dos números por pantalla.
	cout << "Introduce el primer número: "; 
	cin >> num1;
	do {
		cout << "Introduce el primer número: "; 
		cin >> num1;
		if (num1<0) {
			cout << "El número no puede ser negativo" << endl;
		}
	} while (num1<0);
	do {
		cout << "Introduce el segundo número: "; 
		cin >> num2;
		if (num2>num1) {
			cout << "El segundo número no puede ser mayor que el primero" << endl;
		}
		if (num2<0) {
			cout << "El número no puede ser negativo" << endl;
		}
	} while (num2>num1 || num2<0);
	
	//Sacamos por pantalla el combinatorio calculado.
	cout << "El combinatorio de " << num1 << " y " << num2 << " es: " << combinatorio(num1,num2) << endl;
}
