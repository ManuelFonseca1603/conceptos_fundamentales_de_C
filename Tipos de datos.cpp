#include"stdio.h"
#include"stdlib.h"
// bibliotecas que incluyen las 
// funciones utilizadas en el código


main(){
	// declaracion de la función principal
    // por defecto su nombre es main.
    
    int numero_1 = 12;
    // declaración de una variable, se 
	// especifica su tipo; entero (int) en este caso 
	
	float numero_2 = 3.1416;
	// declaración de una variable de tipo decimal (float)
	
	char caracter = '@';
	// declaración de una variable de tipo caracter (char)
	
	char cadena[ ] = "Hola mundo";
	// declaración de una variable de tipo cadena (char)
	
	printf("\nLas variables son: \n\n");
	// Función para imprimir texto (printf) el texto a imprimir
	// deberá ir entre comillas ("")
	// (\n) es un salto de linea 
	
	printf("Numero 1: %i \n",numero_1);
	// la sintaxis %i indican el tipo de dato que 
	// se quiere imprimir: entero.
	// Se debe de poner al final el nombre de la
	// variable que se desea imprimir
	
	printf("Numero 2: %f \n",numero_2);
	// %f para tipos decimal
	
	printf("Caracter: %c \n",caracter);
	// %c para caracteres
	
	printf("Cadena: %s \n",cadena);
	// %s para cademas
	
	system("pause");
	// Función que se utiliza para "detener" el programa
	// al final de su ejecución. 
}
