#include <stdio.h>
#include <stdlib.h>

void print(int *pop, int size, int n_gens);

void main() {
	int i, j, size, n_gens, **pop;
	size = 4;
	n_gens = 8;
	for (i = 0; i < POP_SIZE; i++) {
		for (j = 0; j < NUM_GENS; j++) {
			pop[i][j] = 0;
		}
	}
	print(pop, size, n_gens);
}

void print(int *pop, int size, int n_gens) {
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < n_gens; j++) {
			printf("%u", *(pop + i * n_gens + j));
		}
		printf("\n");
	}
}