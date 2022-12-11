#include <stdio.h>
#include <string.h>

int main(){
    
    int quantidadeDeSessoes = 0, quantidadeDePessoas = 0, 
    quantidadeDePessoasMasculinas = 0, quantidadeDePessoasFemininas = 0, idade, quantidadeDeIdosos = 0,
    quantidadeDeAdultos = 0, quantidadeDeAdolescentes = 0, quantidadeDeCriancas = 0,
    quantidadeDeIngressosMeia = 0, quantidadeDeIngressosInteiro = 0, valorTotalArrecadado = 0,
    quantidadeMasculinaMaiorDeIdade = 0, quantidadeFemininaMaiorDeIdade = 0;
    
    char sexo, tipoDeInresso[9],nomeDoFilme[40];
    
    system("cls");
    system("color 0A");

    printf("\nInforme o nome do filme: ");
    fgets(nomeDoFilme,40,stdin);

    while(quantidadeDeSessoes != 2){
        printf("Informe a quantidade de sessoes: ");
        scanf("%d", &quantidadeDeSessoes);
    }

    while(quantidadeDePessoas < 10){
        printf("\nInforme a quantidade de pessoas(Minimo 10): ");
        scanf("%d", &quantidadeDePessoas);
    } 

    for(int i = 0; i < quantidadeDePessoas + 1; i++){
        
        do{
            printf("\nInforme o sexo(m ou f): ");
            scanf(" %c", &sexo);
            sexo = tolower(sexo);

        }while(sexo != 'm' && sexo != 'f');
        
        if(tolower(sexo) == 'm'){
            quantidadeDePessoasMasculinas++;
        }else{
            quantidadeDePessoasFemininas++;
        }

        do{
            printf("\nInforme a idade: ");
            scanf("%d", &idade);

        }while(idade < 0 && idade < 101);

        if(idade > 3 && idade < 14){
            quantidadeDeCriancas++;
        }else if(idade > 14 && idade < 18){
            quantidadeDeAdolescentes++;
        }else if(idade > 17 && idade < 65){
            quantidadeDeAdultos++;
            if(sexo == 'm'){
                quantidadeFemininaMaiorDeIdade++;
            }else{
                quantidadeFemininaMaiorDeIdade++;
            }
        }else{
            quantidadeDeIdosos++;
        }

        do{
            printf("\nInforme o tipo de ingresso(meia ou inteira): ");
            scanf("%s", &tipoDeInresso);

            for(int j = 0; j < strlen(tipoDeInresso); j++){
                tipoDeInresso[j] = tolower(tipoDeInresso[j]);
            }

        }while((strcmp(tipoDeInresso, "inteira")) != 0 && (strcmp(tipoDeInresso, "meia") != 0));

        if(strcmp(tipoDeInresso, "inteira") == 0){
            valorTotalArrecadado += 50;
            quantidadeDeIngressosInteiro++;
        }else{
            valorTotalArrecadado += 25;
            quantidadeDeIngressosMeia++;
        }

    }

    system("cls");
    printf("Filme a ser exibido: %s\n", nomeDoFilme);
    printf("Quantidade de pesoas do sexo feminino: %d   quantidade de pessoas do sexo masculino: %d\n",
    quantidadeDePessoasFemininas, quantidadeDePessoasMasculinas);

    printf("Quantidade de idosos: %d\nQuantidade de adultos: %d\nQuantidade de adolescentes: %d\nQuantidade de criancas: %d\n", quantidadeDeIdosos,
    quantidadeDeAdultos , quantidadeDeAdolescentes, quantidadeDeCriancas);

    printf("Maiores de idade do sexo masculino: %d\t maiores de idade sexo feminino: %d\n", 
    quantidadeMasculinaMaiorDeIdade,quantidadeFemininaMaiorDeIdade);

    printf("Valor total arrecadado: %d\n", valorTotalArrecadado);
    if(quantidadeDeIngressosMeia > quantidadeDeIngressosInteiro){
        printf("Houveram mais ingressos meias, com: %d vendas!\n", quantidadeDeIngressosMeia);
    }else{
        printf("Houveram mais ingressos inteiras, com: %d vendas!\n", quantidadeDeIngressosInteiro);
    }
}






