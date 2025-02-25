/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 
int main(){
    
    float valor_prod, porcentagem_desc, desc, valor_final;
    
    float *pont_valor_prod = &valor_prod;
    float *pont_porcentagem_desc = &porcentagem_desc;
    float *pont_desc = &desc;
    float *pont_valor_final = &valor_final;
    int resp;
    
    printf("Insira o valor do produto: ");
    scanf("%f", pont_valor_prod);
    
    printf("Deseja adicionar um desconto (1 = Sim/2 = Não)? ");
    scanf("%i", &resp); 
    
    if(resp == 1){
        printf("Digite a porcentagem do desconto: ");
        scanf("%f", pont_porcentagem_desc);
        
        *pont_desc        = *pont_valor_prod * (*pont_porcentagem_desc/100);
        *pont_valor_final = *pont_valor_prod - *pont_desc;
    }
    
    else{
       *pont_desc = 0;
       *pont_valor_final = *pont_valor_prod;
    } 
    
    printf("O valor do produto é R$ %.2f\n", *pont_valor_prod);
    printf("O valor do desconto é R$ %.2f\n", *pont_desc);
    printf("O valor do produto final é R$ %.2f\n", *pont_valor_final);
    
    return 0;
}