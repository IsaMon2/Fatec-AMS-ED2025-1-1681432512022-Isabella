/*----------------------------------------------------------------------------------*/
/*   FATEC-São Caetano do Sul                 Estrutura de Dados                    */
/*                         Id da Atividade: Atividade B2-2                          */
/*                    Objetivo: Programa de Bublesort                               */
/*                                                                                  */
/*                                  Autoras: Isabella Monsalles Barbosa             */
/*                                                                                  */
/*                                                                   Data:06/05/2025*/
/*----------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

void LerNumeros (int numeros[], int num){
    printf("Digite os números: ");
        for (int i = 0; i < num; i++){
          scanf("%d", &numeros[i]);
    }
}

void Bubblesort (int numeros[], int num){
    int temp;
    for (int i = 0; i < num; i++){
        for (int j = 0; j < num - 1; j++){
            if (numeros[i] < numeros[j]){
                temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] =  temp;
            }
            
        }
    }
}

void ImprimirNumeros(int numeros[], int num){
    printf("Ordem ascendente dos números: ");
    for (int i = 0; i < num; i++){
        printf("%d ", numeros[i]);
    }
}

int main()
{
    int num;
    
    printf("Digite a quantidade de números desejados: ");
    scanf("%d", &num);
    
    int numeros[num];

    LerNumeros(numeros, num);
    Bubblesort(numeros, num);
    ImprimirNumeros(numeros, num);
    
    return 0;
    
}
