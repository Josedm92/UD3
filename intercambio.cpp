//Programa que los valores de dos números usando una función.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Creación de la función.
void intercambio(int &num1, int &num2){
    int aux;
    aux = num1;
    num1 = num2;
    num2=aux;
}

//Inicio del programa.
int main() {
    int num1=0, num2=0; //Declaración de variables

	//Pedimos dos números por pantalla.
	cout << "Introduce el primer número: ";
    cin >> num1;
    cout << "Introduce el segundo número: ";
    cin >> num2;
    
    //Sacamos por pantalla el valor inicial de ambos números
    cout << "\nInicialmente el primer número vale: " << num1 << endl;
    cout << "Inicialmente el segundo número vale: " << num2 << endl;
    
    //Llamamos a la función para intercambiar el valor de ambos números.
    intercambio(num1,num2);
    
    //Sacamos por pantalla el valor de los números tras el intercambio.
    cout << "\nDespués del intercambio el primer número vale: " << num1 << endl;
    cout << "Después del intercambio el segundo número vale: " << num2 << endl;    
}
