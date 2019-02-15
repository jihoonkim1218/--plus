#include <stdio.h> 
#include <stdlib.h>
int main() {
	int i,N,j;
	scanf("%d", &N);
	for (i=0;i<N+1;i++) {
		for (j=0;j<i;j++) {
			printf("*");
		}
		printf("\n");
	}
}
