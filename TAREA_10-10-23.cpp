#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

int n,i,j,op;
srand(time(NULL));
printf("ingrese la longitud de la matriz: ");
scanf("%d", &n);

int A[n][n], B[n][n], C[n][n];
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			A[i][j]=rand()%10;
			B[i][j]=rand()%10;
		}
	}
	
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
printf("\n");

	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			printf("%d ",B[i][j]);
		}
		printf("\n");
	}
printf("\n");

printf("operaciones que se pueden realizar:\n");
printf("1. SUMA\n2. RESTA\n3. MULTIPLICACION\n4. Diagonal\n5. SUMA TRIANGULAR SUPERIOR\n6. FIN DEL PROGRAMA\n");
printf("ingrese la operacion a realizar: ");
scanf("%d", &op);

if (op=1){
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			C[i][j]=A[i][j]+B[i][j];
		}
	}
printf("\n");

}

	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
printf("\n");



if (op=6){
	printf("FIN DEL PROGRAMA");
}

return 0;
}
