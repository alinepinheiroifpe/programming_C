#include<stdio.h>
#include<stdlib.h>
#define L 2
#define C 2

void main(){
	
	int i,j;
	int matrizA[L][C];
	int matrizB[L][C];
	int matrizC[L][C];
	
	for(i=0; i<L; i++){
		for(j=0; j<C; j++){
			scanf("%d  ",&matrizA[i][j]);
		}
		printf("\n");
	}
	
	/*for(i=0; i<L; i++){
		for(j=0; j<C; j++){
			scanf("%d  ",&matrizB[i][j]);
		}
		printf("\n");
	}
	
	
	soma de matrizes
	
	for(i=0; i<L; i++){
		for(j=0; j<C; j++){
		matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
		}
			printf("\n");
	}
	
	printf("Matriz A:\n");
	for(i=0; i<L; i++){
		for(j=0; j<C; j++){
			printf("%d  ",matrizA[i][j]);
		}
		printf("\n");
	}
	
	printf("Matriz B:\n");
	for(i=0; i<L; i++){
		for(j=0; j<C; j++){
			printf("%d  ",matrizB[i][j]);
		}
		printf("\n");
	}
	
	printf("Matriz C:\n");
	for(i=0; i<L; i++){
		for(j=0; j<C; j++){
			printf("%d  ",matrizC[i][j]);
		}
		printf("\n");
	} */
	
	printf("Matriz A* %d:\n");
	for(i=0; i<L; i++){
		for(j=0; j<C; j++){
			printf("%d  ",matrizC[i][j]);
		}
		printf("\n");
	}
	
		
}
