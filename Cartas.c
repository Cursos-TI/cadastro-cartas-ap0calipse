#include <stdio.h>      
#include <string.h>   //biblioteca para usar a função strcspn.

int main() {

    char estado,estado2;                  //declarar variaveis "estado" para usar apenas um caractere. 
    char codigo[4], codigo2[4];           //declarar variaveis "codigo" como string com limite de indice [4]. para usar como "um codigo".
    char cidade[30], cidade2[30];         //declarar variaveis "cidade" para usar como string.   
    int populacao, populacao2;            //declarar variaveis "populacao" com objetivo de usar como quantidade. 
    float area, area2;                    //declarar variaveis "area" com objetivo de tamanho/medida.
    double pib, pib2;                      //declarar variaveis "pib" com objetivo de usar mediçao financeira.
    int pnts_turistico, pnts_turistico2;   //quantidade inteira de pontos turisticos.

/*Entrada e armazenamento de dados(informaçoes) 
do usuario nas variaveis da Carta 1 */

    printf("-----------\n"); 
    printf("Carta 1\n");
    printf("-----------\n");

    printf("Digite estado de A-H: ");           //exibe mensagem para o usuario. 
    scanf(" %c", &estado);                     

    printf("Digite um código (até 3 characteres): ");
    scanf("%s", &codigo);

    getchar();       //limpa o que foi armazenado no buffer do teclado anteriormente.

    printf("Digite uma cidade: ");
    fgets(cidade, 30, stdin);                 //permite usar os espaços em nomes sem que pare e armazene no buffer do teclado.

    cidade[strcspn(cidade, "\n")] = '\0';    //tira a quebra de linha do fgets, o "\n".

    printf("Digite a quantidade de populaçao: ");
    scanf("%d", &populacao);

    printf("Digite uma area em km2: ");
    scanf("%f", &area);


    printf("Digite um PIB: ");
    scanf("%lf", &pib);

    printf("Digite a quantidade de  pontos turisticos: ");
    scanf("%d", &pnts_turistico);

    getchar();        //limpa o que foi armazenado no buffer do teclado.
    
    /*fim da entrada de dados na Carta 1.*/

    double densidade, PIBcalculo, PIB_reais;      //declarando variaveis como double para amazenar numeros gigantes.

    PIB_reais = pib * 1000000000.0;              //fazendo um cálculo de tranformação para bilhão (para o usuario não tenha que digitar um numero gigante).
    
    densidade = (double) populacao / area;          //cálculo para descobrir a densidade populacional.
    PIBcalculo = (double) PIB_reais / populacao;    //cálculo para descobrir o Valor médio por pessoa.
    
    
/*Entrada e armazenamento de dados(informaçoes) 
do usuario nas variaveis da Carta 2 */

    printf(" ");
    printf("-----------\n");
    printf("Carta 2\n");
    printf("-----------\n");

    printf("Digite um estado de A-H: ");
    scanf(" %c", &estado2);

    printf("Digite um código (até 3 characteres): ");
    scanf("%s", codigo2);
    
    getchar();

    printf("Digite um nome de cidade: ");
    fgets(cidade2, 30, stdin);                   //permite usar os espaços em nomes sem que pare e armazene no buffer do teclado.

    cidade2[strcspn(cidade2, "\n")] = '\0';     //tirar a quebra de linha do fgets, o "\n".

    printf("Digite quantidade de populaçao: ");
    scanf("%d", &populacao2);

    printf("Digite uma area km²: ");
    scanf("%f", &area2);

    printf("Digite um PIB: ");
    scanf("%lf", &pib2);

    printf("Digite quantidade de pontos turisticos: ");
    scanf("%d", &pnts_turistico2);

    getchar();      //limpar o que foi armazenado no buffer do teclado.

    /*fim da entrada de dados na Carta 2.*/

    double densidade2,PIBcalculo2,PIB_reais2;       //declarando variaveis como double para amazenar numeros gigantes.

    PIB_reais2 = pib2 * 1000000000.0;               //fazendo um cálculo de tranformação para bilhão (para que o usuario não tenha que digitar um numero gigante).
    
    densidade2 = (double) populacao2 / area2;         //cálculo para descobrir a densidade populacional.
    PIBcalculo2 = (double) PIB_reais2 / populacao2;   //cálculo para descobrir o Valor médio financeiro por pessoa.

    printf("\n");
    printf("-----COMPARAÇÃO-----\n");      //exibir mensagem antes da saida de informaçoes.
    printf("\n");


/*Saida dos dados armazenados nas variaveis da Carta 1*/  

    printf("-----------\n");
    printf("Carta 1\n");
    printf("-----------\n");

    printf("Estado: %c\n",estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Poupulaçao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("Pib: %.2f Bilhões de reais\n", pib);
    printf("Números de Pontos Turísticos: %d\n", pnts_turistico);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("Pib per Capita: %.2f reais\n", PIBcalculo);

    /*Fim da saida de dados da Carta 1.*/

    
/*Saida de dados armazenados nas variaveis da Carta 2*/ 

    printf("-----------\n");
    printf("Carta 2\n");
    printf("-----------\n");

    printf("Estado: %c\n",estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Poupulaçao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("Pib: %.2f Bilhões de reais\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", pnts_turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Pib per Capita: %.2f reais\n", PIBcalculo2);

    
    /*Fim de saida de dados da Carta 2.*/


/*Pular linhas para ficar mais separado e organizado*/
    printf("\n");
    printf("\n");
    printf("\n");


    return 0;



}
