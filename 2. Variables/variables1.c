#include <stdio.h>

int main(){
//Declaramos las variables
      //[Tipo de dato][identificador] = [valor];
	short operando1 = 430, operando2 = 258;
	short suma = operando1 + operando2;

	/*Tipos de datos en C.
	Este tema es un poco confuso ya que no esta definido el tamaño de cada tipo de dato, ya que
	dependiendo del tipo de procesador, compilador o S.O se le puede asignar un numero de bits mayor o menor.
	Pero podemos guiarnos con este criterio:
	
	char : 8 bits(Si o si)
	short : 16 bits(Si o si)
	int : Minimo 16 bits y en algunos casos 32 bits
	long : Minimo 32 bits y en algunos casos 64 bits
	long long : Suele ser de 64 bits, ya que 128 bits son muchos.
	
	De tal forma que:
	
	char <= short <= int <= long <= long long.
	
	Para saber exactamente lo que mide un tipo de dato en una determinada situacion(S.O, procesador, compilador...)
	podemos utilizar sizeof. (Mirar el archivo variablesize.c)
	
	Tambien tenemos datos decimales:
	En este caso no hay discrepancias.

	float : 32 bits
	double : 64 bits
	*/

	/*A la hora de imprimir una valor guardado en memoria con printf
	tenemos que hacer uso de los placeholders, que son simbolos que se introducen
	dentro de la cadena a los que luego asignamos un valor. Siempre se indican con un 
	simbolo de porcentaje % seguido de una letra que indica el tipo de dato que vamos a imprimir

	Tipos de datos
	d: Entero
	i: Entero
	c: Caracter
	s: Cadena
	[...] 
	*/
	//                                        | Aqui asigno el valor al primer "placeholder"
	printf("La suma da como resultado %d.\n", suma);
	//                                | "Placeholder" 
	
	/*Para representar un simbolo de porcentaje en un printf y que el compilador no lo confunda
	con un placeholder debemos escribir dos simbolos seguidos (%%) */ 	

	return 0;                              
}
