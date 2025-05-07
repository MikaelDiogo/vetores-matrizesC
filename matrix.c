#include <stdio.h>


int main(void){
    
    int questao1(){
    int matrix [3][3] = {
        {0},
        {0},
        {0}
    };
    int lownum = 1000000;

    printf("Digite 9 numeros inteiros: \n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] < lownum){
                lownum = matrix[i][j];
            }
        }
    }
    printf("Menor numero digitado: %d", lownum);
    return 0;
    }
    
    int questao2(){
         int matrix [4][4] = {
        {0},
        {0},
        {0},
        {0}
    };

    int highnum = 0;
    printf("Digite 16 numeros: \n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] > highnum){
                highnum = matrix[i][j];
            }
        }
    }

    printf("maior numero digitado: %d", highnum);
    return 0;
    
    }
    
    int questao3(){
        int matrix [5][5] = {
        {0},
        {0},
        {0},
        {0},
        {0}
    };

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (i == j) {
                matrix [i][j] = 1;
            }
            else {
                matrix [i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("%2d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
    }
    
    int questao4(){
        int matrix [4][4] = {
        {0},
        {0},
        {0},
        {0}
    };
    int count = 0;

    printf("Digite 16 numeros: \n");
    for (int i = 0; i <4; i++){
        for (int j = 0; j <4; j ++){
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] > 10){
                count ++;
            }
        }
    }

    printf("A quantidade de numeros inteiros maiores que 10: %d", count);
    return 0;
    }
    
    int questao5(){
        int matrix [5][5] = {
        {0, 1, 1, 1, 0},
        {1, 0, 1, 0, 1},
        {1, 1, 0, 1, 1},
        {1, 0, 1, 0, 1},
        {0, 1, 1, 1, 0}
    };
    int sum = 0;

    for (int i = 0; i < 5; i ++){
        for (int j = 0; j < 5; j++){
            if (i == j){
            }
            else {
                if (i + j == 4) {
                }
                else {
                    sum += matrix[i][j];
                }
            }
        }
    }

    printf("A soma dos numeros que nao pertencem a diagonal principal e a diagonal secundaria: %d", sum);
    
    return 0;
    
    }
    questao5();
}
