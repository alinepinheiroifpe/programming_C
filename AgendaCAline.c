
/*
Fases do Projeto Agenda telefônica:
1 - Inclusão ok
2- validar +-

3-listar contatos ok
3.1-listar em ordem alfabética
4-pesquisar por nome 
5-pesquisar por telefone
6-menu(switch) ok

TAREFINHA DE ALLAN
PRA PODER PESQUISAR POR NOME E TEFELONE
1-TEM QUE FAZER UMA FUNÇÃO PRA COMPARA STRINGS
2- DEPOIS É SÓ PERCORRER O VETOR ATÉ ENCONTRAR O NOME OU TELEFONE QUE ESTÁ PROCURANDO
*/




#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TRUE 1

//PROTÓTIPO DAS FUNÇÕES
void cadastrar(); 
void listar();
int compararStrings(char stringA[], char stringB[]);

int qtdContatos=0;

//truct contatos
typedef struct contato{
	char primeiroNome[50];
	char celular[20];
	char telefoneResidencial[15];
	char email[40];
}contato; 

contato contatos[100]; //vetor do tipo struct contato

int main(void){

	int opcao;
	
	while (opcao!=4){

		printf("\n\nAGENDA TELEFONICA\n\n");
		printf("1 - Cadastrar\n");
		printf("2 - pesquisar\n");
		printf("3 - Listar\n");
		printf("4 - Excluir\n");
		printf("5 - Sair\n");
		
		scanf("%d", &opcao);
		
		switch(opcao){
		
			case 1:
				cadastrar();
			break;
			
			case 2:
				//pesquisar
			break;
			
			case 3:
				listar();
			break;
			
			case 4:
				//excluir
			break;
			
			case 5:
				return 0;
				
			default:
				printf("Opcao invalida!");
			}
		
	//return 0; pq já tem return 0 no case4
	}
}

/*Funcções a serem criadas para o projeto
1 - Cadastrar : cadastra e salva num arquivo
2 - Leitura : Listar e procurar um contato específico (pelo nome/ pelo número de telefone/pelo email)
3 - Alterar 
4 - Exclusão : Procurar, encontrar 
*/

//FUNÇÃO PRA CADASTRO DO USUÁRIO
void cadastrar(){

	printf("Digite o primeiro nome:");
	scanf("%49s", contatos[qtdContatos].primeiroNome);
	///printf(contatos[qtdContatos].primeiroNome); TESTE PRA VER SE O VALOR NÃO ESTAVA SE PERDENDO
	
	printf("Digite o número do celular:");
	scanf("%19s", contatos[qtdContatos].celular);
	
	printf("Digite o telefone residencial:");
	scanf("%14s", contatos[qtdContatos].telefoneResidencial);
	
	printf("Digite o e-mail:");
	scanf("%39s", contatos[qtdContatos].email);
	
	qtdContatos++;

}

void listar(){
	int i;
	
	for(i = 0; i < qtdContatos ;i++){
		printf("Nome: %s\n",contatos[i].primeiroNome);
		printf("Celular: %s\n",contatos[i].celular);
		printf("Telefone Fixo: %s\n",contatos[i].telefoneResidencial);
		printf("E-mail: %s\n",contatos[i].email);
	}
	
}

int compararStrings(char stringA[], char stringB[]){
	
	
	/*	
	
	se as strings forem de tamanhos iguais
			enquanto não encontrar \0 ou char diferentes - i=0
				se stringA[i]==stringB[i]
					passa pra a p´roxima posição
				
				se não
					return 0, pois as strings são diferentes
			fim enquanto
				retorna 1 fora do for
	se não (se forem de tamanhos diferentes) 
		retorna 0 pois as strings não são iguais
			
	
	*/
	
}
