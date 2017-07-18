#include <stdio.h>

int main(){
	
	printf("El tamaño de char es de %i bits.\n", sizeof(char) * 8);
	printf("El tamaño de short es de %i bits.\n", sizeof(short) * 8);
        printf("El tamaño de int es de %i bits.\n", sizeof(int) * 8);
        printf("El tamaño de long es de %i bits.\n", sizeof(long) * 8);
        printf("El tamaño de long long es de %i bits.\n", sizeof(long long) * 8);
	//Multiplico por 8 porque sizeof devuelve el tamaño en bytes
	//1 byte = 8 bits
	
	return 0;
	
}
