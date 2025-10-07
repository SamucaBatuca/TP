#include <stdio.h>


int trintaum[7] = {1,3,5,7,8,10,12};
int trinta[4] = {4,6,9,11};

int data(int*,int*,int*);


int main()
{
	int dia, mes=0, ano=0, resp;
	printf("Escreva a data (dd/mm/aaaa): ");
	scanf("%d / %d / %d", &dia, &mes, &ano);
	resp = data(&dia, &mes, &ano);
	if (resp) {
		printf("A data esta de acordo\n");
	} else {
		printf("A data nao esta de acordo\n");
	}

	return 0;
}


int data(int *dia, int *mes, int *ano) {

	int i, conf=0;

	if (*mes != 2 && *mes<12) { // se n for fevereiro e puder entrar

		for (i=0; i<7 && trintaum[i] != *mes; i++);
		if (i < 7) {
			if(*dia >0 && *dia <=30 && *mes > 0 && *mes <= 12 && *ano > 0) { //confere dia 31
				return 1;
			} else {
				return 0;
			}
		} else {
			if(*dia >0 && *dia <=31 && *mes > 0 && *mes < 12 && *ano > 0) { //confere dia
				return 1;
			} else {
				return 0;
			}
		}

	} else if(*mes == 2) { // C) fevereiro

		if ( *ano%4==0 || *ano%100==0 && *ano%400==0 ) {conf = 1;}  // confere se C) bissexto

		if(*dia >0 && *dia <=27 && *mes > 0 && *mes < 12 && ano>0 ) { //confere dia 27
			return 1;
		} else {
			if(*dia >0 && *dia <=28 && *mes > 0 && *mes < 12 && conf ) { //confere dia 28
				return 1;
			} else {
				return 0; //se n for nada, ent retorna 0
			}
		}
	}

	return 0;


}



