#include <stdio.h> 
#include <stdlib.h>
int main() {
	int i,N,j,c;
	scanf("%d", &N);
	for (i=N;i>=0;i--) {
		for (j=0;j<i;j++) {
			printf("*");
		}
		printf("\n");
	}
}
