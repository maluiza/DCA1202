#include <stdio.h>
int main(){
    char   teste_char[4];
    int    teste_int[4];
    float  teste_float[4];
    double teste_double[4];

    printf("teste_char = #\n");    
    for(int aux = 0; aux < 4; aux++) {
        printf("%p\n", teste_char + aux);
    }
    printf("#\n"); // saida do char, utiliza 1 byte na memoria.  


    printf("teste_int = #\n");    
    for(int aux = 0; aux < 4; aux++) {
        printf("%p\n", teste_int + aux);
    }
    printf("#\n"); // saida do int, utiliza 4 bytes na memoria.

    printf("teste_float = #\n");    
    for(int aux = 0; aux < 4; aux++) {
        printf("%p\n", teste_float + aux);
    }
    printf("#\n"); // saida do float, utiliza 4 bytes na memoria.  
    
    printf("teste_double = #\n");    
    for(int aux = 0; aux < 4; aux++) {
        printf("%p\n", teste_double + aux); // saida do double, utiliza 8 bytes na memoria. 
    }
    printf("#\n");

    return 0;
