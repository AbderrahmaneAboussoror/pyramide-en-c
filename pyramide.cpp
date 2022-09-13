#include <stdio.h>

int main(){
	int nombre, space, etoile, t; 
	printf("donner le nombre de lignes: ");
	scanf("%d", &nombre);
	space = nombre - 1;
	t = nombre + 1;
	for(int i = 0; i <= nombre; i++){
		for(int j = 0; j <= space; j++){
			printf("%c", ' ');
		}
		if(i != 0){
			for(int j = nombre+2; j <= t; j++){
				printf("*");
			}
			t++;
		}
		etoile = space + 1;
		space--;
		for(int j = etoile; j < nombre; j++){
			printf("*");
		}
		printf("\n");
	}
}
