#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/*
Mapa para disciplina de Algoritos e Lógica de Programação II.
Aluno: Alexandre da Silva.
R.A: 1978487-5
Polo: Tubarão - SC
*/

struct registro{
	int codigo; 
	char autor[100];
	char obra[100];
	char editora[100];
};

int main () {
	setlocale(LC_ALL, "Portuguese");
	system("color 2E");
// Ler acentos no struct
	unsigned int cp =1252;
	unsigned int cpIn = GetConsoleCP();
	unsigned int cpOut = GetConsoleOutputCP();
	SetConsoleOutputCP(cp);
	SetConsoleCP(cp);
	
	struct registro livro[10];
	int i; i = 0;
	int menu;
	int cont; cont = 0;
	int x; x = 0;
	int q; q = 1;
	int op; op=1;
		do {	
			printf ("\n\t\t\t\t\t*************Cadastro de Livros**************\n");
			printf ("\n\t\t\t\t\t--------------------Menu----------------------\n"); 
			printf ("\n\n\t\t\t\t\t\t1 - Inserir um Novo cadastro\n");
			printf ("\n\n\t\t\t\t\t\t2 - Mostrar todos os cadastros\n");
			printf ("\n\n\t\t\t\t\t\t0 - Encerrar\n");
			printf ("\n\n\n\n\t\t\t\t\t********************************************\n");
			printf ("\n\n\t\t\n\n\tDigite a opção desejada:");
			fflush(stdin);
			scanf ("%d", &menu);
			fflush(stdin);
			system ("cls");
			switch (menu) {
				case 0:
					printf ("\n\t\t\t\t\t\tSistema Encerrado...\n");
					system ("pause");
					op=menu;
					break;
				case 1:	
					x++;
					cont++;
					if(x==1){
						livro[1].codigo = cont;
						printf("\nCódigo: %d\n", livro[1].codigo); 
						printf("\nInsira o nome do autor(s) do livro:\n");
						fgets(livro[1].autor,100,stdin);
 						printf("\nInsira o nome da obra:");
						fgets(livro[1].obra,100,stdin);
						printf("\nInsira o nome da editora:");
						fgets( livro[1].editora,100,stdin);	
						system ("cls");
					}
					if(x==2){
						livro[2].codigo = cont;
						printf("\nCódigo: %d\n", livro[2].codigo); 
						printf("\nInsira o nome do autor(s) do livro:\n");
						fgets(livro[2].autor,100,stdin);
 						printf("\nInsira o nome da obra:");
						fgets(livro[2].obra,100,stdin);
						printf("\nInsira o nome da editora:");
						fgets( livro[2].editora,100,stdin);	
						system ("cls");
					}
					if(x==3){
						livro[3].codigo = x;
						printf("\nCódigo: %d\n", livro[3].codigo); 
						printf("\nInsira o nome do autor(s) do livro:\n");
						fgets(livro[3].autor,100,stdin);
 						printf("\nInsira o nome da obra:");
						fgets(livro[3].obra,100,stdin);
						printf("\nInsira o nome da editora:");
						fgets( livro[x].editora,100,stdin);	
						system ("cls");
					}
					if(x==4){
						livro[4].codigo = x;
						printf("\nCódigo: %d\n", livro[4].codigo); 
						printf("\nInsira o nome do autor(s) do livro:\n");
						fgets(livro[4].autor,100,stdin);
 						printf("\nInsira o nome da obra:");
						fgets(livro[4].obra,100,stdin);
						printf("\nInsira o nome da editora:");
						fgets( livro[4].editora,100,stdin);	
						system ("cls");
					}
					if(x==5){
						livro[5].codigo = x;
						printf("\nCódigo: %d\n", livro[5].codigo); 
						printf("\nInsira o nome do autor(s) do livro:\n");
						fgets(livro[5].autor,100,stdin);
 						printf("\nInsira o nome da obra:");
						fgets(livro[5].obra,100,stdin);
						printf("\nInsira o nome da editora:");
						fgets( livro[5].editora,100,stdin);	
						system ("cls");
					}
					if (x>5){
						system ("cls");
						printf("\n\t\t\t----------------------------------------------------------------------\n\n");
						printf("\n\t\t\t\t\t\tSistema de Cadastro Lotado.\n\n");
						printf("\n\t\t\t\t\tNão é possível armazenar mais informações!\n\n");
						printf("\n\t\t\t----------------------------------------------------------------------\n\n");
						system ("pause");
						system ("cls");
					}
				break;
				case 2:
					if(x==0){
						printf("\n\t\t\t\t\t------------Lista Vazia!------------\n\n");
						system ("pause");
						system ("cls");
					}
					else{
						printf("\n\t\t\t\t\t------------Lista de Livros Cadastrados------------\n\n");
						if (x==1){
							printf("\nCódigo: %d \n", livro[1].codigo);
							printf("\nNome do Autor: %s \n", livro[1].autor);
							printf("Nome do livro: %s \n", livro[1].obra);
							printf("Nome da editora: %s \n", livro[1].editora);
							printf("-----------------------------------------\n");
							system ("pause");
							system ("cls");
						}
						if (x==2){
							printf("\nCódigo: %d \n", livro[1].codigo);
							printf("\nNome do Autor: %s \n", livro[1].autor);
							printf("Nome do livro: %s \n", livro[1].obra);
							printf("Nome da editora: %s \n", livro[1].editora);
							printf("-----------------------------------------\n");
							printf("\nCódigo: %d \n", livro[2].codigo);
							printf("\nNome do Autor: %s \n", livro[2].autor);
							printf("Nome do livro: %s \n", livro[2].obra);
							printf("Nome da editora: %s \n", livro[2].editora);
							printf("-----------------------------------------\n");	
							system ("pause");
							system ("cls");	
						}
						if (x==3){
							printf("\nCódigo: %d \n", livro[1].codigo);
							printf("\nNome do Autor: %s \n", livro[1].autor);
							printf("Nome do livro: %s \n", livro[1].obra);
							printf("Nome da editora: %s \n", livro[1].editora);
							printf("-----------------------------------------\n");
							printf("\nCódigo: %d \n", livro[2].codigo);
							printf("\nNome do Autor: %s \n", livro[2].autor);
							printf("Nome do livro: %s \n", livro[2].obra);
							printf("Nome da editora: %s \n", livro[2].editora);
							printf("-----------------------------------------\n");	
							printf("\nCódigo: %d \n", livro[3].codigo);
							printf("\nNome do Autor: %s \n", livro[3].autor);
							printf("Nome do livro: %s \n", livro[3].obra);
							printf("Nome da editora: %s \n", livro[3].editora);
							system ("pause");
							system ("cls");
						}
						if (x==4){
							printf("\nCódigo: %d \n", livro[1].codigo);
							printf("\nNome do Autor: %s \n", livro[1].autor);
							printf("Nome do livro: %s \n", livro[1].obra);
							printf("Nome da editora: %s \n", livro[1].editora);
							printf("-----------------------------------------\n");
							printf("\nCódigo: %d \n", livro[2].codigo);
							printf("\nNome do Autor: %s \n", livro[2].autor);
							printf("Nome do livro: %s \n", livro[2].obra);
							printf("Nome da editora: %s \n", livro[2].editora);
							printf("-----------------------------------------\n");	
							printf("\nCódigo: %d \n", livro[3].codigo);
							printf("\nNome do Autor: %s \n", livro[3].autor);
							printf("Nome do livro: %s \n", livro[3].obra);
							printf("Nome da editora: %s \n", livro[3].editora);
							printf("-----------------------------------------\n");
							printf("\nCódigo: %d \n", livro[4].codigo);
							printf("\nNome do Autor: %s \n", livro[4].autor);
							printf("Nome do livro: %s \n", livro[4].obra);
							printf("Nome da editora: %s \n", livro[4].editora);
							printf("-----------------------------------------\n");	
							system ("pause");
							system ("cls");
						}
						if(x==5||x>5){
							printf("\nCódigo: %d \n", livro[1].codigo);
							printf("\nNome do Autor: %s \n", livro[1].autor);
							printf("Nome do livro: %s \n", livro[1].obra);
							printf("Nome da editora: %s \n", livro[1].editora);
							printf("-----------------------------------------\n");
							printf("\nCódigo: %d \n", livro[2].codigo);
							printf("\nNome do Autor: %s \n", livro[2].autor);
							printf("Nome do livro: %s \n", livro[2].obra);
							printf("Nome da editora: %s \n", livro[2].editora);
							printf("-----------------------------------------\n");	
							printf("\nCódigo: %d \n", livro[3].codigo);
							printf("\nNome do Autor: %s \n", livro[3].autor);
							printf("Nome do livro: %s \n", livro[3].obra);
							printf("Nome da editora: %s \n", livro[3].editora);
							printf("-----------------------------------------\n");
							printf("\nCódigo: %d \n", livro[4].codigo);
							printf("\nNome do Autor: %s \n", livro[4].autor);
							printf("Nome do livro: %s \n", livro[4].obra);
							printf("Nome da editora: %s \n", livro[4].editora);
							printf("-----------------------------------------\n");	
							printf("\nCódigo: %d \n", livro[5].codigo);
							printf("\nNome do Autor: %s \n", livro[5].autor);
							printf("Nome do livro: %s \n", livro[5].obra);
							printf("Nome da editora: %s \n", livro[5].editora);
							printf("-----------------------------------------\n");	
							system ("pause");
							system ("cls");
						}
					}
					break;
					default:
						printf("\n\t\t\t\t\t------------Opção Inválida!------------\n\n");
						system ("pause");
						system ("cls");
					break;
	  		}
		}while (op!=0);
};
		
		




		



