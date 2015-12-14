//Problema 4.8 pg 123: programa que pasa un número de segundos a días, horas, minutos y segundos usando funciones.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Creación de las funciones
int dias (int n) {
	int resto;
	resto=n%86400;
	n=(n-resto)/86400;
	return n;
}

int horas (int n) {
	int resto;
	n=n-(dias(n)*86400);
	resto=n%3600;
	n=(n-resto)/3600;
	return n;
}

int minutos (int n) {
	int resto;
	n=n-(horas(n)*3600)-(dias(n)*86400);
	resto=n%60;
	n=(n-resto)/60;
	return n;
}

int segundos (int n) {
	n=n-(minutos(n)*60)-(horas(n)*3600)-(dias(n)*86400);
	return n;
}

//Inicio del programa.
int main () {
	int secs=0; //Declaración de variables.
	
	cout << "Introduzca un número de segundos: ";
	cin >> secs;
	
	cout << "Días: " << dias(secs) << endl;
	cout << "Horas: " << horas(secs) << endl;
	cout << "Minutos: " << minutos(secs) << endl;
	cout << "Segundos: " << segundos(secs) << endl;
	
}
