/*média ponderada*/
#include <stdio.h>

int main()
{
    
    float n1,n2,n3,n4,nexam,tot_aulas,tot_faltas,tx_falta,mp;
    
    printf("\n Digite o total de Aulas: ");
    scanf("%f",&tot_aulas);
    
    printf("\n Digite o total de Faltas: ");
    scanf("%f",&tot_faltas);
    
    tx_falta=(tot_faltas/tot_aulas)*100;
    
    if(tx_falta>25){
        printf("\n Status do Aluno: Reprovado com %.2f %% de falta",tx_falta);
    }
    else{
        printf("\n Digite a Nota 1 - Peso 10%: ");
        scanf("%f",&n1);
        printf("\n Digite a Nota 2 - Peso 20%: ");
        scanf("%f",&n2);
        printf("\n Digite a Nota 3 - Peso 20%: ");
        scanf("%f",&n3);
        printf("\n Digite a Nota 4 - Peso 50%: ");
        scanf("%f",&n4);
        
        if((n1>=0 && n1<=10)&&(n2>=0 && n2<=10) &&(n3>=0 && n3<=10)&&(n4>=0 && n4<=10)){
            mp=(n1*10/100)+(n2*20/100)+(n3*20/100)+(n4*50/100);    
        }
        else{
            printf("\n Notas Inválidas. N1: %.2f - N2: %.2f - N3: %.2f - N4:%.2f",n1,n2,n3,n4);
            return 0;
        }
        
        if(mp>=7){
            printf("\n Status do Aluno: APROVADO");
            printf("\n Taxa de Faltas: %.2f %% ",tx_falta);
            printf("\n Média Final: %.2f",mp);
            
        }
        else{
            printf("\n Aluno está de Exame com média %.2f",mp);
            printf("\nDigite a Nota do Exame:");
            scanf("%f",&nexam);
            if(nexam<0 || nexam>10){
                printf("\n Nota de Exame Inválida!");
            }
            else{
                if(nexam>=5){
                    printf("\n Status do Aluno: APROVADO NO EXAME");
                    printf("\n Taxa de Faltas: %.2f %% ",tx_falta);
                    printf("\n Nota do Exame: %.2f",nexam);
                }
                else{
                    printf("\n Status do Aluno: REPROVADO");
                    printf("\n Taxa de Faltas: %.2f %% ",tx_falta);
                    printf("\n Nota do Exame: %.2f",nexam);
                }
            }
        }
        
    
    
    
    }
    
    
    
    
    
}

 

/*média ponderada*/
#include <stdio.h>
#include <string.h>

int main()
{
    
    float n1,n2,n3,n4,nexam,tot_aulas,tot_faltas,tx_falta,mp;
    char nome_alu[10];
    
    printf("\nDigite o nome do aluno: ");
    scanf("%s",&nome_alu);
    
    printf("\n Digite o total de Aulas: ");
    scanf("%f",&tot_aulas);
    
    printf("\n Digite o total de Faltas: ");
    scanf("%f",&tot_faltas);
    
    tx_falta=(tot_faltas/tot_aulas)*100;
    
    if(tx_falta>25){
        printf("\n Status do Aluno %s: Reprovado com %.2f %% de falta",nome_alu,tx_falta);
    }
    else{
        printf("\n Digite a Nota 1 - Peso 10%: ");
        scanf("%f",&n1);
        printf("\n Digite a Nota 2 - Peso 20%: ");
        scanf("%f",&n2);
        printf("\n Digite a Nota 3 - Peso 20%: ");
        scanf("%f",&n3);
        printf("\n Digite a Nota 4 - Peso 50%: ");
        scanf("%f",&n4);
        
        if((n1>=0 && n1<=10)&&(n2>=0 && n2<=10) &&(n3>=0 && n3<=10)&&(n4>=0 && n4<=10)){
            mp=(n1*10/100)+(n2*20/100)+(n3*20/100)+(n4*50/100);    
        }
        else{
            printf("\n Notas Inválidas. N1: %.2f - N2: %.2f - N3: %.2f - N4:%.2f",n1,n2,n3,n4);
            return 0;
        }
        
        if(mp>=7){
            printf("\n Status do Aluno %s: APROVADO",nome_alu);
            printf("\n Taxa de Faltas: %.2f %% ",tx_falta);
            printf("\n Média Final: %.2f",mp);
            
        }
        else{
            printf("\n Aluno %s está de Exame com média %.2f",nome_alu,mp);
            printf("\nDigite a Nota do Exame:");
            scanf("%f",&nexam);
            if(nexam<0 || nexam>10){
                printf("\n Nota de Exame Inválida!");
            }
            else{
                if(nexam>=5){
                    printf("\n Status do Aluno %s: APROVADO NO EXAME",nome_alu);
                    printf("\n Taxa de Faltas: %.2f %% ",tx_falta);
                    printf("\n Nota do Exame: %.2f",nexam);
                }
                else{
                    printf("\n Status do Aluno %s: REPROVADO",nome_alu);
                    printf("\n Taxa de Faltas: %.2f %% ",tx_falta);
                    printf("\n Nota do Exame: %.2f",nexam);
                }
            }
        }
        
    
    
    
    }
    
    
    
    
    
}