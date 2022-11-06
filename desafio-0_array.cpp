/*Você recebe um array A de tamanho N. Você precisa imprimir os elementos de A em ordem alternada (começando do índice 0).


Exemplo 1:				Exemplo 2:

Input:					Input:
N = 4					N = 5
A[] = {1, 2, 3, 4}		A[] = {1, 2, 3, 4, 5}
Output:					Output:
1 3						1 3 5		*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int n, *a, i;
    printf("Quantidade de elementos: ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    
    for (i = 0; i < n; ++i) {
    	printf("Elemento %d: ", i+1);
    	scanf("%d",&a[i]);
    }
    
    printf("\n");
    
	for (i = 0; i<n; ++i) {
        printf("%d ", a[i]);
        i++;
    }
    printf("\n");
    
    free(a);
    return 0;
}
