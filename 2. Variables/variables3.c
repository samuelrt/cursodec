#include <stdio.h>

int main(){
	
	/*Para imprimir un decimal, debemos realizar el mismo procedimiento que para los enteros*/
	
	float decimal = 2.6767648;

	printf("Nuestro numero es: %f. \n", decimal);
	/*El resultado de esto va a ser diferente a 2.6767648, ya que C hace lo que quiere con los decimales. Por lo que float y double
	son bastante ineficientes. La mejor solucion en utilizar una implementacion propia para los numero decimales. Pero por ahora, es
	sufuciente. 
	Otra buena tecnica, por ejemplo, si vas a trabajar con euros, es recomendable trabajar con centimos y utilizar enteros.*/
	
	printf("Flotante impreso con un placeholder entero: %d. \n", decimal);	
	//En este caso lo imprimimos como entero y lo redondea.	

	return 0;	

}
