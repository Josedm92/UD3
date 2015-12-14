//Problema 4.6 pg 122: programa que calcula el Máximo Común Divisor y el Mínimo Comúm Múltiplo usando funciones.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Creación de las funciones
int mcd (int a, int b){
	//Calculamos el resto de los dos números.
	int resto=a%b;
	
	//Mientras el resto sea distinto de 0 seguiremos calculándolo.
	while (resto!=0) {
		a=b;
		b=resto;
		resto=a%b;
	}
	return b;
}

int mcm (int a, int b) {
	int mcm;
	mcm = (a*b)/mcd(a,b); //Según la relación "a*b=mcd(a,b)*mcm(a,b)" calculamos el mcm partiendo del mcd.
	return mcm;
}

//Inicio del programa.
int main () {
	int a=0, b=0; //Declaración de variables.
	
	//Pedimos por pantalla los dos números y los almacenamos en sus variables correspondientes.
	cout << "Introduce número 1: ";
	cin >> a;
	cout << "Introduce número 2: ";
	cin >> b;
	
	//Sacamos por pantalla el M.C.D. calculado.
	cout << "El Máximo Común Divisor es: " << mcd(a,b) << endl;
	
	//Sacamos por pantalla el M.C.M. calculado.
	cout << "El Mínimo Común Múltiplo es: " << mcm(a,b) << endl;
	
}
