#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
char nome[50]; 
    int população;
    float area;
    float PIB;
    int NPT;
    
printf("Digite o nome da cidade: \n");
fgets(nome,50,stdin);

printf("Digite a população: \n");
scanf("%d", &população);

printf("Digite a área: \n");
scanf("%f", &area);

printf("Digite o PIB: \n");
scanf("%f", &PIB);

printf("Digite o número de pontos turísticos: \n");
scanf("%d", &NPT);

printf("Nome da cidade: %s\n População: %d\n Área: %f\n", nome, população, area);    
printf("PIB: %f\n Número de pontos turísticos: %d\n", PIB, NPT);


return 0;
} 
