#include <stdio.h> 
#include <stdlib.h>
int main() {
	int i,N;
	scanf("%d", &N);
	for (i=0;i<=9;i++) {
		printf("%d * %d = %d\n", N, i, N*i);
	}
}
