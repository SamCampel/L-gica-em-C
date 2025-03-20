#include <stdio.h>

int main()
{
   
   int opc,cont;
   float num,soma,sub,mult,div;
  
   do{
        printf("\n\n*****MENU CALCULADORA*****");
        printf("\n* 1 - SOMA               *");
        printf("\n* 2 - SUBTRAÇÃO          *");
        printf("\n* 3 - MULTIPLICAÇÃO      *");
        printf("\n* 4 - DIVISÃO            *");
        printf("\n* 5 - Sair               *");
        printf("\n**************************");
        printf("\n\n Digite a opção desejada: ");
        scanf("%d",&opc);
        if (opc<1 || opc>5){
            printf("\n Opção Inválida!");
        }
        else {
                if(opc==1){
                    printf("\nOperação Selecionada: SOMA");
                    soma=0;
                    do{
                        printf("\nDigite o  Número ou 0 para ver o resultado: ");
                        scanf("%f",&num);
                        if(num != 0){
                            soma=soma+num;
                            printf(" %.1f + ",num);
                        }
                    }while (num!=0);
                    printf(" = %.1f ",soma);
                }    
                if(opc==2){
                    sub=0; cont=0;
                    printf("\nOperação Selecionada: SUBTRAÇÃO");
                    do{
                        printf("\nDigite o  Número ou 0 para ver o resultado: ");
                        scanf("%f",&num);
                        if(num != 0){
                            if(cont==0 ){
                                sub=num-sub;
                                printf(" %.1f - ",num);
                                cont++;
                                
                            }
                            else{
                                sub=sub-num;
                                printf(" %.1f - ",num);
                                cont++;
                                
                            }
                            
                        }
                        
                    }while (num!=0);
                    printf(" = %.1f ",sub);
                    
                }
                if(opc==3){
                    mult=1;
                    printf("\nOperação Selecionada: MULTIPLICAÇÃO");
                    do{
                        printf("\nDigite o  Número ou 0 para ver o resultado: ");
                        scanf("%f",&num);
                        if(num != 0){
                            mult=mult*num;
                            printf(" %.1f X ",num);    
                        }
                        
                    }while (num!=0);
                    printf(" = %.1f ",mult);
                }
                if(opc==4){
                    div=1;
                    cont=0;
                    printf("\nOperação Selecionada: DIVISÃO");
                    do{
                        printf("\nDigite o  Número ou 0 para ver o resultado: ");
                        scanf("%f",&num);
                        if(num != 0){
                            if(cont==0){
                                div=num/div;
                                printf(" %.1f / ",num);
                                cont++;
                            }
                            else{
                                div=div/num;
                                printf(" %.1f / ",num);
                                cont++;
                            }
                            
                        }
                        
                    }while (num!=0);
                    printf(" = %.1f ",div);
                    
                }
            }
            
            if(opc==5){
                printf("\n Saindo da CALCULADORA");
                return 0;
            }
        
   }while (opc!=5);
   
    
}

 

#include <stdio.h>

int main()
{

    int cont;
    
    cont=0;
    while (cont<5){
        printf("\nLoop While: %d",cont);
        cont++;
    }
    
    for(cont=0;cont<5;cont++){
        printf("\nLoop for: %d",cont);
    }
    
    
    
    
    
}

 

/* crie um código onde o usuário informa o limite mínimo 
e máximo, o código deve exibir a ordem crescente e 
a ordem decrecente. utilize o for para reolver**/

#include <stdio.h>

int main()
{

    int cont,lim_min,lim_max;
    
    printf("\nDigite o Limite Mínimo: ");
    scanf("%d",&lim_min);
    printf("\nDigite o Limite Máximo: ");
    scanf("%d",&lim_max);
    
    printf("\n Ordem de Crescente de %d até %d",lim_min,lim_max);
    for(cont=lim_min;cont<=lim_max;cont++){
        printf("\n %d",cont);
    }
    
    printf("\n Ordem de Decrescente de %d até %d",lim_max,lim_min);
    for(cont=lim_max;cont>=lim_min;cont--){
        printf("\n %d",cont);
    }
    
    
    
    
}