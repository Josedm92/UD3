//Programa que dice si un número es primo usando una función.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Creación de la función
int numeroprimo (int n) {
	bool primo=true;
	for (int divisor=2; divisor<=(n/2) && primo==true; divisor++) { //Calculamos la división del número desde entre 2 hasta su mitad.
		if (n%divisor==0) { //Comprobamos el módulo vale 0, en ese caso el número no es primo y termina el bucle.
			primo=false;
		}
	}
	
	
	return primo;
}

//Inicio del programa.
int main () {
	//Declaración de variables.
	int numero=0;
	bool primo=true;
	
	do {
		cout << "Introduzca un número: "; //Pedimos un número por pantalla.
		cin >> numero; //Almacenamos el número en su variable.
		if (numero<=2) { //Comprobamos si el número es menor o igual que 2, en caso afirmativo lo indicamos.
			cout << "Introduzca un número mayor que 2" << endl;
		}
	} while (numero<=2); //Comprobamos si el número es menor o igual que 2, en caso afirmativo se repite el bucle.
	
	
	//Llamamos a la función para saber si el número es primo o no.
	primo=numeroprimo(numero);
	
	//Sacamos por pantalla el resultado
	if (primo==true) { 
		cout << "El número es primo" << endl;
	} else {
		cout << "El número no es primo" << endl;
	}
}
