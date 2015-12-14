//Programa que indica el número mayor y el menor de los 100 introducidos usando una función.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Creación de la función.
void mayormenor(double &numero, double &mayor, double &menor){
	//Comprobamos si el número introducido es mayor que el actual mayor, en ese caso actualizamos el valor.
		if (numero>mayor) { 
			mayor=numero;
		}
		//Comprobamos si el número introducido es menor que el actual menor, en ese caso actualizamos el valor.
		if (numero<menor) {
			menor=numero;
		}
}

//Inicio del programa.
int main () {
//Declaración e inicialización de variables.
	double numero=0.0, mayor=0.0, menor=0.0;
	int i=1;
	
	//Pedimos el primer número por pantalla.
	cout << i <<". Introduzca un número: ";
	cin >> numero;
	cout << "Almacenado." << endl;
	//Establecemos el número introducido como el mayor y el menor provisional.
	mayor=numero;
	menor=numero;
	
	//Seguimos pidiendo números hasta que se hayan introducido 100.
	for(i=2; i<=10; i++) {
		cout << i << ". Introduzca otro número: ";
		cin >> numero;
		cout << "Almacenado." << endl;
		//Llamamos a la función para saber si el número es el mayor o el menor y actualizar las variables si es el caso.
		mayormenor(numero,mayor,menor);
	}
	//Sacamos por pantalla el número mayor y el número menor de los introducidos anteriormente.
	cout << "El número mayor es: " << mayor << endl;
	cout << "El número menor es: " << menor << endl;
}
