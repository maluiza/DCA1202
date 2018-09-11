#include <stdio.h>
int TrocarNumeros (int &n1, int &n2) {
	int aux;
	aux = n1;
	n1 = n2;
	n2 = aux;
}

int main () {
	int num1 = 12;
	int num2 = 63;
	
	TrocarNumeros (num1, num2);
	printf("Valor de 1:", num1);
	printf("Valor de 2:", num2);
	

return 0;
}
