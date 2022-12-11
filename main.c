#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
	
	int i = 0, j = 0;
	char nome[10];
	double nota,media,soma;
	
	while (i < 2){
			
			printf ("\n digite seu nome:");
				scanf ("%s", &nome);
				
				j=0;
	while(j < 4){
				
			printf ("Nota %d: ", j+1);
				scanf ("%lf", &nota);
				
					soma = soma + nota;
		j++;
	}
		
					media = (soma) / 4;
			printf("Media : %2.lf", media);
				
		i++;
	}
	
		return 0;
}
