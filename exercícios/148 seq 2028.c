#include <stdio.h>

int main(){
    int N, caso = 1;
    while (scanf("%d", &N) != EOF){
        int totalNumeros = 1;
        for (int i = 1; i <= N; i++){
            totalNumeros += i;
        }

        printf("Caso %d: %d %s\n", caso, totalNumeros, totalNumeros == 1 ? "numero" : "numeros");
        printf("0");
        for (int i = 1; i <= N; i++) {
            for (int j = 0; j < i; j++) {
                printf(" %d", i);
            }
        }
        printf("\n\n");
        caso++;
    }
    return 0;
}
