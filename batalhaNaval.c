#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    int i, j;

    //Preenche tudo com 0 (água)
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }
        
    //Navio horizontal: linha 2, colunas E–G
    for (j = 4; j < 4 + 3; j++){
        tabuleiro[1][j] = 3;
    }
        

    //Navio vertical: coluna H, linhas 6–8
    for (i = 5; i < 5 + 3; i++){
        tabuleiro[i][7] = 3;
    }
    //Cabeçalho das colunas A-J
    //Print para alinhamento visual
    printf("   ");
    for (j = 0; j < 10; j++){
        printf("%c ", 'A' + j);
    }
        printf("\n");

    //Linhas numeradas de 1 a 10
    for (i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
         //Numeração das linhas
        for (j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
