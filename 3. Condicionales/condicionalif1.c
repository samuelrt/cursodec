#include <stdio.h>

int main(){
	
	int a = 4;	

	/*Para declarar un condicional debemos usar esta sintaxis:
	if([CONDICION]){
		[Codigo que se ejecutara en caso de que la condicion sea verdad]
	}*/

	if(a == 4){ //Evalua
		printf("El valor de a es igual a 4\n"); //Se ejecuta si la evaluacion es verdadera
	}//El programa sigue
	
	/*Del mismo modo, podemos decirle a C que ejecute determinado codigo solo si una condicion es falsa,
	para ello utilizamos else*/

	if(a == 5){
		printf("El valor de a es igual a 5\n"); //Este codigo no se ejecutara
	} else{
		printf("El valor de a es diferente a 5\n"); //Este codigo se ejecutara
	}
		
	return 0;
}
