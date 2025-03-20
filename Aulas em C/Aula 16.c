/* resposta do exe1 -
Calcule o Fatoria de um número. Sabendo que por definição: 0!=1
ex.: 5!=5x4x3x2x1=120*/
#include <stdio.h>

int main()
{
    
    int cont=5,num,res=1;
    
    
    printf("\nDigite um número:");
    scanf("%d",&num);
    
    if(num==0){
        res=1;
    }
    else{
        cont=num;
        printf("\nFatorial de %d !",num);
        printf("\n");
        while(cont>=1){
            res=res*cont;
            if(cont==1){
                printf(" %d =",cont);    
            }
            else{
                printf(" %d x",cont);    
            }
            
            cont--;
        }
    }
    
    printf(" %d",res);
    
}

/* resposta do exe2 - Faça um programa que receba a idade, o peso, a altura,
de 10 pessoas e calcule e mostre na tela:
A quantidade e a porcentagem de pessoas com idade superior a 50 anos
e
peso inferior a 60 quilos;
A média das idades das pessoas com altura inferior a 1.50;
A percentagem de pessoas com peso superior a 100 kgs


#include <stdio.h>

int main()
{
    
  int idade, cont50mais, pesoinf60,contpesosuperior100,cont,contaltura=0;
  float peso, altura,mediaaltinf,somaidade;
  cont=1;
  while(cont<=10){
      printf("\nDigite a idade da pessoa %d / %d = ",cont,10);
      scanf("%d",&idade);
      if(idade>50 && peso<60){
          cont50mais++;
      }
      printf("\nDigite o peso da pessoa %d / %d = ",cont,10);
      scanf("%f",&peso);
      if(peso>100){
          contpesosuperior100++;
      }
      printf("\nDigite a altura da pessoa %d / %d = ",cont,10);
      scanf("%f",&altura);
      if(altura<1.5){
          contaltura++;
          somaidade=somaidade+idade;
      }
      cont++;
    }
    
    printf("\n A quantidade de pessoas com idade superior a 50 anos e Peso inferior a 60 kgs: %d",cont50mais);
    printf("\n A Porcentagem de pessoas com idade superior a 50 anos e Peso inferior a 60 kgs %.1f%% ",(cont50mais*100/10));
    printf("\n A quantidade das pessoas com altura inferior a 1.50 %d ",contaltura);
    printf("\n A média das idades das pessoas com altura inferior a 1.50 %.1f ",(somaidade/contaltura));
    printf("\n A quantidade de pessoas com peso superior a 100 kgs: %d",contpesosuperior100);
    printf("\n A Porcentagem de pessoas com peso superior a 100 kgs %.1f%% ",((contpesosuperior100*100)/10));
    
  
  
  
  
  
    
}

/*ex3-
Elabore um algoritmo que leia as variáveis C e N, respectivamente
código e número de horas trabalhadas de um operário. E calcule o salário
sabendo-se que ele ganha R$ 10,00 por hora. Quando o número de horas
exceder a 50 calcule o excesso de pagamento armazenando-o na variável E,
caso contrário zerar tal variável. A hora excedente de trabalho vale R$
20,00. No final do processamento imprimir o salário total e o salário
excedente.
*/

#include <stdio.h>

int main(){
    
    int c;
    float n,sal_normal,vl_hr_normal=10,vl_hr_excedente=20,sal_execedente=0,e=0;
    
    
    printf("\n Digite o Código do funcionário: ");
    scanf("%d",&c);
    
    printf("\n Digite o número de horas trabalhadas: ");
    scanf("%f",&n);
    
    printf("\n Código do Funcionário: %d",c);
    if(n>50){
        e=n-50;
        sal_execedente=vl_hr_excedente*e;
        sal_normal=vl_hr_normal*50;
        printf("\n total de Horas trabalhadas : %.1f",n);
        printf("\n total de Horas excedentes : %.1f",e);
        printf("\n Salário Normal: %.2f",sal_normal);
        printf("\n Salário Excedente: %.2f",sal_execedente);
        printf("\n Salário Total: %.2f",sal_execedente+sal_normal);
        
    }
    else{
        e=0;
        sal_normal=vl_hr_normal*n;
        printf("\n total de Horas trabalhadas : %.1f",n);
        printf("\n Salário Normal: %.2f",sal_normal);
    }
    
    
    
    
    
    
}

 


/*ex4- Faça uma Programa que receba duas notas de 6 alunos e calcule e
imprima:
A média entre essas 2 notas de cada aluno;
A mensagem de acordo com a tabela abaixo:
Média Mensagem
De 0 a 5.0 reprovado
De 5.1 a 6.9 recuperação
De 7.0 a 10 aprovado
Total de alunos aprovados e o total de alunos reprovados;
A média geral entre as médias dos alunos.
******************************************/
#include <stdio.h>

int main()
{
  int contaprov=0,contreprov=0,cont;
  float nota1=0,nota2=0,media=0,mediageral=0;
  
  for (cont=1;cont<=6;cont++){
      printf("Digite a 1ª Nota do aluno %d / 6: ",cont);
      scanf("%f",&nota1);
      printf("Digite a 2ª Nota do aluno %d / 6: ",cont);
      scanf("%f",&nota2);
     
     media=(nota1+nota2)/2;
     mediageral=mediageral+media;
     
     printf("\n A média do aluno %d/6 = %.1f",cont,media);
     if(media<5){
         printf("\n Aluno reprovado\n");
         contreprov++;
     }
     else {
         if(media <6.9){
             printf("\n Aluno de Recuperação\n");
         }
         else{
             printf("\n Aluno Aprovado\n");
             contaprov++;
         }
     }
     
      
  }
  
  printf("\n Quantidade de Alunos aprovados: %d  ",contaprov);
  printf("\n Quantidade de Alunos reprovados: %d  ",contreprov);
  printf("\n A média geral entre as médias dos alunos: %.1f  ",mediageral/cont);
  
  
  
  
    
}


/*
ex5- Faça um programa que receba várias idades informadas pelo usuário,
e que calcule e mostre a média das idades digitadas.
Finalize digitando a idade igual a zero,
não permitir idade < que 0,
neste caso mostrar a mensagens de idade inválida e
desconsiderar este valor no cálculo da média.
*/

#include <stdio.h>

int main(){
    
  int cont;
  float media=0,idade=1;
    
    do{
        printf("\n Digite a idade: ");
        scanf("%f",&idade);
        media=media+idade;
        cont++;
        if(idade<0){
            printf("\n idade inválida");
        }
    }while (idade!=0);
    
    cont--;
    if(cont==0){
        printf("Foram digitadas %d idades.",cont);
        printf("\nMédia das idades: 0 ");
    }
    else{
        printf("Foram digitadas %d idades.",cont);
        printf("\nMédia das idades: %.1f ",media/cont);
        
    }       
        
        
    
    
    
    
    
    
}