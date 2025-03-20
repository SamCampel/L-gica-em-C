#include <stdio.h>
#include <string.h>
int main()
{
    char nome1[50],nome2[50];
    
    float media,idade1,idade2, ano_nasc_1, ano_nasc_2,ano_atual;
    
    printf("\nDigite o Nome da 1ª Pessoa: ");
    scanf("%s",&nome1);
    
    printf("\nDigite o Nome da 2ª Pessoa: ");
    scanf("%s",&nome2);
    
    printf("\nDigite o Ano de Nascimento da 1ª Pessoa: ");
    scanf("%f",&ano_nasc_1);
    
    printf("\nDigite o Ano de Nascimento da 2ª Pessoa: ");
    scanf("%f",&ano_nasc_2);
    
    printf("\nDigite o Ano Atual: ");
    scanf("%f",&ano_atual);
    
    
    idade1=ano_atual-ano_nasc_1;
    idade2=ano_atual-ano_nasc_2;
    media=(idade1+idade2)/2;
    
    printf("\n Nome da 1ª Pessoa: %s",nome1);
    printf("\n Nome da 2ª Pessoa: %s",nome2);
    printf("\n Idade da 1ª Pessoa: %.0f anos",idade1);
    printf("\n Idade da 2ª Pessoa: %.0f anos",idade2);
    printf("\n Média de Idade das 2 Pessoas: %.1f anos",media);
    
    
}

 

#include <stdio.h>

int main()
{
    
    float nota1, nota2, nota3, mediap,peso;
    
    peso=10;
    
    printf("Digite a 1ª Nota: ");
    scanf("%f",&nota1);
    
    printf("Digite a 2ª Nota: ");
    scanf("%f",&nota2);
    
    printf("Digite a 3ª Nota: ");
    scanf("%f",&nota3);
    
    mediap=(nota1*0.2)+(nota2*0.3)+(nota3*0.5);
    
    printf("\nNota 1: %.1f ",nota1);
    printf("\nNota 2: %.1f ",nota2);
    printf("\nNota 3: %.1f ",nota3);
    printf("\nMédia Ponderada: %.1f ",mediap);
    
    
    
    
}

 


#include <stdio.h>

int main()
{
  float n,e,vl_hora,h_e,vlhr_e,sal_normal,sal_exc;

int c;
  
  vl_hora=10;
  vlhr_e=20;
  

printf("\nDigite o Código do funcionário: );

scanf("%d",&c);

  printf("\nDigite o Número de Horas trabalhadas: ");
  scanf("%f",&n);
  
  if(n<50){
      e=0;
      sal_normal=n*vl_hora;
      printf("\nNúmero de horas Trabalhadas: %.2f",n);
      printf("\nNão Há hora excedentes para este funcionário.");
      printf("\nSalário Total: %.2f",sal_normal);
    }
  else{
      e=n-50;
      sal_exc=(e*vlhr_e);
      sal_normal=50*vl_hora;
        printf("\nNúmero de horas Trabalhadas: %.2f",n);
        printf("\nNúmero de horas Excedentes: %.2f",e);    
        printf("\nSalário de horas Excedentes: %.2f",e*vlhr_e);
        printf("\nSalário dentro das 50 horas: %.2f",sal_normal);
        printf("\nSalário Total: %.2f",sal_normal+sal_exc);
      
  }
  
  
  
  
  
  
  
  
  
  
  
}

 

#include <stdio.h>

int main()
{

    int codigo;
    float vlr_eti,vlr_total;
    
    
    printf("\n***OPÇÕES DE PAGAMENTO***");
    printf("\n1- Á vista em dinheiro ou cheque, recebe 10%% de desconto ");
    printf("\n2- Á vista no cartão de crédito, recebe 15%% de desconto ");
    printf("\n3- Em duas vezes, preço normal de etiqueta sem juros ");
    printf("\n4- Em três vezes, preço normal de etiqueta mais juros de 10%%");
    
    printf("\nDigite o valor da etiqueta:");
    scanf("%f",&vlr_eti);
    
    printf("\nDigite o código do Pagamento:");
    scanf("%d",&codigo);
    
    if((codigo<1) || (codigo>4)){
        printf("\nEsse Código de Pagamento é Inválido!");
    }
    else if(codigo==1){
        vlr_total=vlr_eti*0.9;
        printf("\nOpção Escolhida:  ");
        printf("Pagamento À vista em dinheiro ou cheque, recebe 10%% de Desconto.");
        printf("\nValor da Etiqueta: %.2f",vlr_eti);
        printf("\nValor do Desconto %.2f:",vlr_eti*0.1);
        printf("\nValor do Pagamento com Desconto:  %.2f",vlr_total);
    }
    else if (codigo==2){
        vlr_total=vlr_eti*0.85;
        printf("\nOpção Escolhida:  ");
        printf("Pagamento À vista no cartão de crédito, recebe 15%% de desconto.");
        printf("\nValor da Etiqueta: %.2f",vlr_eti);
        printf("\nValor do Desconto: %.2f",vlr_eti*0.15);
        printf("\nValor do Pagamento com Desconto:  %.2f",vlr_total);
        
        
    }else if (codigo==3){
        vlr_total=vlr_eti/2;
        printf("\nOpção Escolhida:  ");
        printf("Em duas vezes, preço normal de etiqueta sem juros.");
        printf("\nValor da Etiqueta: %.2f",vlr_eti);
        printf("\nValor do Desconto: 0.0");
        printf("\nValor da Parcela:  %.2f",vlr_total);
        
    }else if (codigo==4){
        vlr_total=vlr_eti*1.1/3;
        printf("\nOpção Escolhida:  ");
        printf("Em três vezes, preço normal de etiqueta mais juros de 10%%.");
        printf("\nValor da Etiqueta: %.2f",vlr_eti);
        printf("\nValor do juros: %.2f",vlr_eti*0.1);
        printf("\nValor Total com juros: %.2f",vlr_eti*1.1);
        printf("\nValor da Parcela:  %.2f",vlr_total);
        
    }
    
    
    
}