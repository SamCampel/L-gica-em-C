#include <stdio.h>
int main()
{
    int cont;
    
    cont=1; // iniciando o contador
    while (cont<=5){
        printf("Não Cruze a Faixa Amarela!\n");
        printf("Atenção ao Entrar ou Sair do Trem!\n");
        printf("No Embarque, aguarde o desembarque das pessoas!\n");
        printf("Aviso nº: %d \n",cont);
        cont= cont+1;
    }
}

 

Programa da Tabuada

#include <stdio.h>
int main()
{
    int cont, multiplicador,res;
    
    printf("Qual Tabuada, você deseja: ");
    scanf("%d",&multiplicador);
    
    cont=0; // iniciando o contador
    printf ("***Tabuada do %d ****\n",multiplicador);
    while (cont<=10){
        res=cont*multiplicador;
        printf("%d x %d = %d\n",cont,multiplicador,res);
        cont= cont+1;
    }
}