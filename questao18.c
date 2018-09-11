#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void soma(int * vetor1, int * vetor2, int * vetor3, int n){

    int i;
    for(i = 0; i < n; i++){
        vetor3[i] = vetor1[i]+vetor2[i];
    }

}

int main(void){

    srand(time(0));
    int *vetor1;
    int *vetor2;
    int *vetor3;
    int n, i;

    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &n);

    vetor1 = (int *)malloc(n*sizeof(int));
    vetor2 = (int *)malloc(n*sizeof(int));
    vetor3 = (int *)malloc(n*sizeof(int));

    for(i = 0; i < n ; i++){
        vetor1[i] = rand()%100 + 1;
    }
    for(i = 0; i < n; i++){
        vetor2[i] = rand()%100 + 1;
    }

    soma(vetor1, vetor2, vetor3, n);

    printf("Vetor 1 = ");
    printf("| %d |", vetor1[0]);
    for(i = 1; i < n; i++){
        printf(" %d |", vetor1[i]);
    }
    printf(" \n");

    printf("Vetor 2 = ");
    printf("| %d |", vetor2[0]);
    for(i = 1; i < n; i++){
        printf(" %d |", vetor2[i]);
    }
    printf(" \n");

    printf("Vetor 3 = ");
    printf("| %d |", vetor3[0]);
    for( i = 1; i < n; i++){
        printf(" %d |", vetor3[i]);
    }
    printf(" \n");

    free(vetor1);
    free(vetor2);
    free(vetor3);
}
