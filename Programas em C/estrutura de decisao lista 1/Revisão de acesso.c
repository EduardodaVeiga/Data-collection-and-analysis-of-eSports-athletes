#include <stdio.h>

int main() {
	int A, B, aux;
	scanf("%d %d", &A, &B);
	if (B>A) {
		aux = A;
		A = B;
		B = aux;
	}
	if (A%B==0)
		printf("São múltiplos.");
	else
		printf("Não são múltiplos.");
	return 0;
}
