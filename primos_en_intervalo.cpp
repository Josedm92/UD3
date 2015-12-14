//Programa que saca por pantalla todos los números primos de un intervalo usando una función.
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
	int inicio=0, fin=0;
	bool primo=true;
	
	do {
		cout << "Introduzca el inicio del intervalo: "; //Pedimos el inicio del intervalo por pantalla.
		cin >> inicio; //Almacenamos el número en su variable.
		if (inicio<=2) { //Comprobamos si el número es menor o igual que 2, en caso afirmativo lo indicamos.
			cout << "Introduzca un número mayor que 2" << endl;
		}
	} while (inicio<=2); //Comprobamos si el número es menor o igual que 2, en caso afirmativo se repite el bucle.
	
	
	do {
		cout << "Introduzca el fin del intervalo: "; //Pedimos el fin del intervalo por pantalla.
		cin >> fin; //Almacenamos el número en su variable.
		if (fin<=inicio) { //Comprobamos si el fin es menor o igual que el inicio, en caso afirmativo lo indicamos.
			cout << "El fin del intervalo debe ser mayor que el inicio" << endl;
		}
	} while (fin<=inicio); //Comprobamos si el fin es menor o igual que el inicio, en caso afirmativo se repite el bucle.
	
	
	
	//Bucle que comprueba qué números del intervalo son primos.
	for (int numero=inicio; numero<=fin; numero++) {
		//Llamamos a la función para saber si el número actual es primo o no.
		primo=numeroprimo(numero);
		//Si el número es primo lo indicamos por pantalla.
		if (primo==true) { 
			cout << "El número " << numero << " es primo." << endl;
		} 
	}
}
