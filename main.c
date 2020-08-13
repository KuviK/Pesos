#include <stdio.h>
#include <stdlib.h>

/* Função: aplicação que recebe uma quantidade indefinida de pesos e que mostra a quantidade de pessoas com peso compreendido entre os 50 e os 80kg na consola.
   Autor:  Luís Filipe */

int main(int argc, char *argv[]) {
	
	//Variaveis
	float peso;
	int quantidadePessoas;
	
	//limpar ecra
	system("cls");
	
	//informar condição de saída
	puts("Para terminar insira 0 como peso");
	puts("");
	
	//Solicitação do(s) peso(s) ao utilizador
	while (peso > 0) //Assumindo que é impossível ter 0kg de peso ou peso negativo.
	{
		printf("Insira o seu peso: ");
		scanf("%f", &peso);
		
		//Verificar se o(s) peso(s) inserido(s) está/estão dentro do intervalo 50 a 80kg
		if (peso >= 50 && peso < 80)
			quantidadePessoas++; //Auto-incrementar
		
	}  
	
	//Apresentação do numero de pessoas que correspondem à condição pretendida
	printf("\nA quantidade de pessoas com peso compreendido entre 50 e 80kg e de: %d", quantidadePessoas);
	
	//pausa
	getchar();
}
