#include <stdio.h>

int main() {
	
	/*En este caso vamos a imprimir caracteres.
	Pimero definimos una variable de tipo char, ya que tiene un tamaño de 8 bits. */
	char caracter1 = 111;
	char caracter2 = 'o';
	/*Como podemos apreciar, podemos asignarle un valor numerico,o directamente el caracter que queramos, 
	siempre entre comillas simples.
	Al escribir un valor numerico, si lo imprimimos como un caracter, imprimira el que se corresponda con ese codigo
	en la tabla ASCII*/

	//Veamos que ocurre al imprimirlo
	printf("Aqui imprimimos la variable caracter1 con un placeholder numerico: %d.\n", caracter1);
	//Al ejecutarlo podremos comprobar que se imprime el numero 111, ya que usamos %d.
	//Pasaria lo mismo si hicieramos esto
	printf("Voy a imprimir un valor numerico partiendo de un caracter: %d.\n", caracter2);

	// De la misma manera podriamos imrpimir el caracter partiendo tanto de un valor numerico, como del mismo.
	printf("Es lo mimo imprimir un caracter desde un numero: %c, que desde una letra: %c.\n", caracter1, caracter2);

	return 0;
}
