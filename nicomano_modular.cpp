//Programa que calcula los cubos de los números naturales con el método de Nicómano usando funciones.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Creación de la función
int nicomano(int n) {
	int impar=0, cubo=0;
    impar=((n-1)*n+1);
    cubo = impar;
    for(int i=1; i<n; i++){
        impar=impar+2; 
        cubo=cubo+impar;
    }
    return cubo;
}

//Inicio del programa.
int main(){
	//Declaración de variables
    int numero=0;
    
    //Pedimos por pantalla el número del cual calcular su cubo.
    cout << "Introduzca un número para calcular su cubo: ";
    cin >> numero;
    
    //Sacamos por pantalla el cubo calculado con la función.
    cout << "El cubo de " << numero << " es: " <<  nicomano(numero) << endl;
}
