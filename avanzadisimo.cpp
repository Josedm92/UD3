//Ejemplo 3.2.4 pg 69: programa que resuelve la ecuación x³+x-1=0 en [0,1] usando funciones.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
#include <cmath> //Incluimos librería cmath para poder usar pow.
using namespace std; //Sentencia obligatoria.

//Creación de las funciones
double ecuacion (double precision) {
	double izquierda=0, derecha=1, centro=0;
	
	while (derecha-izquierda>precision) {
		centro=(derecha+izquierda)/2;
		if (pow(centro,3)+centro-1<0) {
			izquierda=centro;
		} else {
			derecha=centro;
		}
	}
	
	return derecha+izquierda/2;	
}

//Inicio del programa.
int main () {
	//Declaración de variables.
	double precision=0;
	
	//Pedimos la precisión por pantalla.
	cout << "Introduzca la precisión: "; 
	cin >> precision;
	
	cout << "La solución de x³+x-1=0 en [0,1] es: " << ecuacion(precision) << endl;
}
