#include <stdio.h>
#include <stdlib.h>

float * Metodo_BSort(float *vet, int num){//Utilizando o metodo do bubble sort para ordenar os valores do vetor
	int aux, i, j;
	for(j=num-1; j>=1; j--){
		for(i=0; i<j; i++){
			if(vet[i]>vet[i+1]){
				aux=vet[i];
                    vet[i]=vet[i+1];
                    vet[i+1]=aux;
            }//fim laco de dentro
        }//fim laco de fora
    }

	return vet;

}//fim BSort
void Imprime_Vetor(float *vet,int num){

	printf("{"); //inicio

	for(int i=0;i<num;i++){

		printf("%f ",vet[i]);//saida dos valores
	}
	printf("}\n");
 	
}//fim Imprime_Vetor
float * set_vetor(float *vet,int num){
	float aux;
	int i;
	printf("\n Digite os numeros do vetor: ");
	for(i=0;i<num;i++){
		scanf("%f",&aux);
		vet[i] = aux;
	}
	return vet;
} //fim set_vetor

int main()
{
	float *vet; 
	int elem;

	printf("\n Tamanho do vetor: ");
	scanf("\n %d",&elem);

	vet = (float *) malloc(elem*sizeof(float)); 

	printf("\Entre com os valores do vetor: ");
	set_vetor(vet,elem);
	
	printf("\n Vetor com os valores ordenados: ");
	Metodo_BSort(vet,elem);
	Imprime_Vetor(vet,elem);


	return 0;
}//fim main
