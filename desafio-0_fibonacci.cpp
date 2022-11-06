/*Dado um n�mero N. Encontre os dois �ltimos d�gitos do en�simo n�mero de fibonacci. Nota: Se os dois
�ltimos d�gitos forem 02, retorne 2.

Exemplo 1:
Input:													Input:
N = 13													N = 255
Output:													Output:
33														70
Explica��o:												Explica��o:
O 13o n�mero de Fibonacci � 233.						O 255o n�mero de Fibonacci � 87571595343018854458033386304178158174356588264390370.
Ent�o os dois �ltimos d�gitos s�o 3 e 3.				Assim, os dois �ltimos d�gitos s�o 7 e 0.		*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int fib(int n){
    if (n <= 1){
    	return n;
	}else{
		return fib(n - 1) + fib(n - 2);
	}
}
  
int main(){
	int n, f;
	char buf[3], *p;
	printf("Posicao na serie de fibonacci: ");
	scanf("%d", &n);
	f=fib(n);
	
    buf[0] = f / 10 % 10 + '0';  /* tens digit */
    buf[1] = f % 10 + '0';       /* unit digit */
    buf[2] = '\0';               /* null terminator */
    p = buf;
    puts(p);
    return 0;
}
