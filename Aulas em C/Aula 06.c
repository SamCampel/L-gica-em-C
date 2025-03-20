/* calculo da media simples*/

#include <stdio.h>

int main()
{
    float a1,a2,media;
    
    printf ("Digite a nota A1: ");
    scanf("%f",&a1);
    
    printf("\nDigite a nota A2: ");
    scanf("%f",&a2);
    
    media=a1+a2;
    
    if (media>=6){
        printf("\nO aluno com media %.2f esta APROVADO! ",media);
    }
    else {
        printf("\nO aluno com media %.2f esta de A3! ",media);
    }
    
    
    
}

 

/* compra de maças*/

#include <stdio.h>

int main()
{
    int qtde;
    float vlr_mc, custo_total;
    
    printf ("Digite a quantidade de maças compradas: ");
    scanf("%d",&qtde);
    
    if( qtde >=12){
        vlr_mc=1;
    }
    else{
        vlr_mc=1.3;
    }
    
    custo_total= qtde * vlr_mc;
    
    printf("\n****CUPOM FISCAL*****");
    printf("\nQuantidade de macas: %d",qtde);
    printf("\nValor da Maça: %.2f", vlr_mc);
    printf("\nTotal da Compra: %.2f", custo_total);
    printf("n\***********************");
    
    
    
}

 

o usuário deve informar o ano de nascimento,
o programa deve calcular a idade do usuario
e informar se o mesmo pode dirigir ou não dirigir.

 

#include <stdio.h>

int main()
{
    int ano_nasc, ano_atual, idade;
    
    printf("Digite o ano de seu nascimento: \n");
    scanf("%d",&ano_nasc);
    
    printf("Digite o ano atual: \n");
    scanf("%d",&ano_atual);
    
    idade=(ano_atual-ano_nasc);
    
    if( idade>=18){
        printf("\nVocê tem %d anos, portanto PODE DIRIGIR!",idade);
    }
    else{
        printf("\nVocê tem %d anos,portanto NÃO PODE DIRIGIR!",idade);
    }
    
    
   
}