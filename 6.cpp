#include <stdio.h> 
#include <stdlib.h>
int main() {
	int i,N,j,c;
	scanf("%d", &N);
	for (i=0;i<N+1;i++) {
		for (j=0;j<N-i;j++)printf(" ");
		for (c=0;c<iv;c++) printf("*");
		printf("\n");
	}
}
