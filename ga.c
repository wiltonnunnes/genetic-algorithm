#include <stdio.h>
#include <stdlib.h>
#include "random.h"

void print(int **pop, int size, int n_gens);

void main() {
	int i, j, size, n_gens, **pop;
	size = 4;
	n_gens = 8;
	pop = malloc(size * sizeof(int*));
	initSeed();
	for (i = 0; i < size; i++) {
		pop[i] = malloc(n_gens * sizeof(int));
		for (j = 0; j < n_gens; j++) {
			pop[i][j] = randomInteger(0, 2);
		}
	}
	print(pop, size, n_gens);
	for (i = 0; i < size; i++)
		free(pop[i]);
	free(pop);
}

void print(int **pop, int size, int n_gens) {
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < n_gens; j++) {
			printf("%u", pop[i][j]);
		}
		printf("\n");
	}
}
