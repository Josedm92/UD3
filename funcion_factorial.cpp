//Programa que hace la factorial de un número usando una función.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Creación de la función
int factorial (int n) {
	int i;
	int acu=1;
	for (i=2; i<=n; i++) {
		acu=acu*i;
	}
	
	return acu;
}

//Inicio del programa.
int main () {
	int dato; //Declaración de variable.
	
	//Pedimos un número por pantalla.
	cout << "Introduce un valor positivo: "; 
	cin >> dato;
	
	//Sacamos por pantalla el factorial calculado.
	cout << "El factorial de " << dato << " es: " << factorial(dato) << endl;
}
