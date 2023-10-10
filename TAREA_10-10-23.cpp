#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

int n,i,j,op;
srand(time(NULL));
printf("Ingrese la longitud de la matriz: ");
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

printf("Operaciones que se pueden realizar:\n(tomando en cuenta que a la primer matriz se le resta/suma/multiplica lo de la segunda matriz)\n");
printf("1. SUMA\n2. RESTA\n3. MULTIPLICACION\n4. DIAGONAL\n5. SUMA TRIANGULAR SUPERIOR\n6. FIN DEL PROGRAMA\n\n");
printf("\nIngrese la operacion a realizar: ");
scanf("%d", &op);

if (op==1){
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			C[i][j]=A[i][j]+B[i][j];
		}
	}
printf("\n");
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
printf("\n");
}

if (op==2){
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			C[i][j]=A[i][j]-B[i][j];
		}
	}
printf("\n");
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
printf("\n");
}

if (op==3){
for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			C[i][j]=A[i][j]*B[i][j];
		}
	}
printf("\n");

	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
printf("\n");
}

if(op==4){
int suma=0;
	printf("Matriz a usar:\n");
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++){	
			printf("%d ",A[i][j]);
			if (i==j)
				suma+=A[i][j];
		}
		printf("\n");
	}
	printf("La suma de la digonal es: %d",suma);
	
}

if(op==5){
int sumaTriangularSuperior=0;
	printf("Matriz a usar:\n");
	for (i=0; i<n; i++){
	    for (j=0; j<n; j++){
	    	printf("%d ",A[i][j]);
	    	if(j>i)
	        sumaTriangularSuperior+=A[i][j];
	    }
	    printf("\n");
	}

printf("La suma de la parte triangular superior de la matriz es: %d\n", sumaTriangularSuperior);
}

if (op==6){
	printf("FIN DEL PROGRAMA");
}
return 0;
}
