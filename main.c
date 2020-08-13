#include <stdio.h>
#include <stdlib.h>

/* Fun��o: aplica��o que recebe uma quantidade indefinida de pesos e que mostra a quantidade de pessoas com peso compreendido entre os 50 e os 80kg na consola.
   Autor:  Lu�s Filipe */

int main(int argc, char *argv[]) {
	
	//Variaveis
	float peso;
	int quantidadePessoas;
	
	//limpar ecra
	system("cls");
	
	//informar condi��o de sa�da
	puts("Para terminar insira 0 como peso");
	puts("");
	
	//Solicita��o do(s) peso(s) ao utilizador
	while (peso > 0) //Assumindo que � imposs�vel ter 0kg de peso ou peso negativo.
	{
		printf("Insira o seu peso: ");
		scanf("%f", &peso);
		
		//Verificar se o(s) peso(s) inserido(s) est�/est�o dentro do intervalo 50 a 80kg
		if (peso >= 50 && peso < 80)
			quantidadePessoas++; //Auto-incrementar
		
	}  
	
	//Apresenta��o do numero de pessoas que correspondem � condi��o pretendida
	printf("\nA quantidade de pessoas com peso compreendido entre 50 e 80kg e de: %d", quantidadePessoas);
	
	//pausa
	getchar();
}
