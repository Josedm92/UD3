//Programa que hace la media de tres números usando una función.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Creación de la función
double media (double n1, double n2, double n3) {
	return (n1+n2+n3)/3.0;
}

//Inicio del programa.
int main () {
	//Declaración de variables.
	double num1=0.0, num2=0.0, num3=0.0; 
	
	//Pedimos los números por pantalla.
	cout << "Introduce el primer número: "; 
	cin >> num1;
	cout << "Introduce el segundo número: "; 
	cin >> num2;
	cout << "Introduce el tercer número: "; 
	cin >> num3;
	
	//Sacamos por pantalla la media de los tres números.
	cout << "La media de " << num1 << ", " << num2 << " y " << num3 << " es: " << media(num1,num2,num3) << endl;
}
