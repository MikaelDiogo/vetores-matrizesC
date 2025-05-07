#include <stdio.h>


int main(void){
    int questao1(void){
        int vet [6] = {0, 0, 0, 0, 0 ,0};

        printf("Digite seis valores inteiros: \n");
            for (int i = 0; i < 6; i++) {
            scanf("%d", &vet[i]);
        }

        printf("Os numeros que voce digitou foram: \n");
            for (int i = 0; i < 6; i++) {
         printf("%d\n", vet[i]);
        }
    return 0;
    }
    
    int questao2(){
         int vet [5] = {0, 0, 0, 0 ,0};
    int med = 0;

    printf("Digite cinco valores inteiros: \n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vet[i]);
    }
    
    printf("Os numeros que voce digitou foram: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", vet[i]);
        med += vet[i];
    }
    printf("A media dos valores digitados eh: %d", med/5);
    return 0;
    
    }
    
    int questao3(){
         int vet[9] = {0, 0, 0, 0, 0 ,0, 0, 0};
    int x, y;
    printf("Digite oito valores inteiros: \n");
    for (int i = 0; i < 8; i++) 
        scanf("%d", &vet[i]);

    printf ("Agora digite dois valroes aleatorios entre 0 e 6: \n");
    scanf ("%d", &x);
    scanf ("%d", &y);

    printf ("Os valores encontrados nas posicoes digitadas foram: %d, %d\n", vet[x], vet[y]);
    printf ("A soma dos valores: %d", vet[x] + vet[y]);
    return 0;
    }
    
    int questao4(){
        int vet [10] = {0, 0, 0, 0, 0 ,0, 0, 0, 0, 0};
        int count = 0;
        int vetpar [10] = {0, 0, 0, 0, 0 ,0, 0, 0, 0, 0};
    
    printf("Digite dez valores inteiros: \n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
        if ((vet[i]%2) == 0) {
            vetpar[count] = vet[i];
            count++;
        }
    }

    printf("Dos numeros digitados apenas %d sao pares, sendo: \n", count);
    for (int i = 0; i < count; i++) {
        printf("%d\n", vetpar[i]);
    }
    return 0;
    }
    
    int questao5(){
        
    float vet [10] = {0, 0, 0, 0, 0 ,0, 0, 0, 0, 0};
    float vetnegativo [10] = {0, 0, 0, 0, 0 ,0, 0, 0, 0, 0};
    int count = 0; float numspositivos = 0.0;

    printf("digite dez valores reais: \n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &vet[i]);
        if (vet[i] < 0){
            vetnegativo[count] = vet[i];
            count++;
        }
        else {
            numspositivos += vet[i];
        }
    }

    printf("Dos numeros digitados, %d sao negativos, sendo: \n", count);
    for (int i = 0; i < count; i++) {
        printf("%.2f\n", vetnegativo[i]);
    }

    printf ("A soma dos numeros positivos: %.2f\n", numspositivos);
    
    return 0;
    }
    
}
