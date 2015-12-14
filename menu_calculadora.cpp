//Programa que pide al usuario dos números y hace los cálculos básicos usando funciones.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Creación de las funciones.
double suma(double numero1, double numero2){
	return numero1+numero2;
}

double resta(double numero1, double numero2){
	return numero1-numero2;
}

double multiplicacion(double numero1, double numero2){
	return numero1*numero2;
}

double division(double numero1, double numero2){
	return numero1/numero2;
}


			
//Inicio del programa.
int main () {
	//Declaración e inicialización de variables.
	double numero1=0.0, numero2=0.0, resultado=0.0;
	char opcion;
	
	//Pedimos dos números por pantalla.
	cout << "Introduce el primer número: ";
    cin >> numero1;
    cout << "Introduce el segundo número: ";
    cin >> numero2;
    
	//Pedimos al usuario que escoja una operación para realizar con dichos números (suma, resta, multiplicación o división).
	cout << "\nEscoja una opción: " << endl;
	cout << "\t(s) Sumar los números: " << endl;
	cout << "\t(r) Restar los números: " << endl;
	cout << "\t(m) Multiplicar los números: " << endl;
	cout << "\t(d) Dividir los números: " << endl;
	cin >> opcion;
	
	//Comprobamos el dato introducido.
	switch (opcion) {
		case 's':
		case 'S': //Si introduce s o S se hace la suma de los números y se saca el resultado por pantalla.
			resultado=suma(numero1,numero2);
			cout << "\nLa suma de " << numero1 << " y " << numero2 << " da como resultado: " << resultado << endl;
			break;
		case 'r':
		case 'R': //Si introduce r o R se hace la resta de los números y se saca el resultado por pantalla.
			resultado=resta(numero1,numero2);
			cout << "\nLa resta de " << numero1 << " y " << numero2 << " da como resultado: " << resultado << endl;
			break;
		case 'm':
		case 'M': //Si introduce m o M se hace la multiplicación de los números y se saca el resultado por pantalla.
			resultado=multiplicacion(numero1,numero2);
			cout << "\nLa multiplicación de " << numero1 << " y " << numero2 << " da como resultado: " << resultado << endl;
			break;
		case 'd':
		case 'D': //Si introduce d o D se hace la división de los números y se saca el resultado por pantalla.
			resultado=division(numero1,numero2);
			cout << "\nLa división de " << numero1 << " y " << numero2 << " da como resultado: " << resultado << endl;
			break;
		default: //En caso de que no introduzca ninguna de las opciones anteriores, se finaliza el programa con un mensaje de error.
			cout << "\nOpción incorrecta." << endl;
	}
}