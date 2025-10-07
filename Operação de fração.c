#include <stdio.h>
#include <math.h>

typedef struct fracao { // cria uma estrutura do tipo fraC'C#o que vai armazenar o "modelo" de fraC'C#o em uma variavel
	int numerador;
	int denominador;
} farcao;

fracao soma (fracao parcela1, fracao parcela2);
fracao sub (fracao minuendo, fracap subtraendo);
fracao divide (dracao dividendo, fracao divisor);
fracao multiplica (fracao fator1, fracao fator2);
fracao simplifica (fracao f);
void mostra (fracao f);
void leFracao (fracao *f);
// atC) aqui no arquivo .h
// salvar a partir daqui no arquivo .c com o mesmo nome do arquivo .h

int mdc ( int n1, int n2) {
	int resto, dividendo, divisor
	dividendo = abs(n1);
	divisor = abs (n2);
	resto = divdendo % divisor;
	while ( resto!=0) {
		dividendo = divisor;
		divisor = resto;
		resto = dividendo % divisor;
	}
	return divisor;
}

int main()
{
	// testando as operaC'C5es:
	fracao a, b, s, d, p, q;
	printf("fracao 1: ");
	leFracao(&a);
	printf("Fracao 2: ");
	leFracao(&b);
	s = soma (a, b);
	d = sub (a, b);
	p = multiplica(a, b);
	q = divide (a, b);
	printf("Soma: \n")
	mostra (s);
	printf("Subtracao:\n");
	mostra (d);
	printf("Multiplicacao:\n");
	mostra (p);
	printf("Divisao:\n");
	mostra (q);
	printf("\n");

	return 0;
}

fracao simplifica (fracao f) { // simplifica duas fraC'C5es
	fracao resultado;
	int maxDivisor;
	maxDivisor = mdc (f.numerador, f.divisor);
	resultado.numerador = f.numerador / maxDivisor;
	resultado.denominador = f.denominador / maxDivisor;
	return resultado;

}

fracao soma(fracao f1, fracao f2) { // pega duas fraC'C5es para somar
	fracao total;
	total.denominador = f1.denominador*f2.denominador; //multiplica os denomiadores
	total.numerador = f1.numerador * f2.denominador + f2.numerador * f1.denominador;
	return simplifica(total);
}

fracao sub (fracao f1, fracao f2) { // subtrai as fraC'C5es
	fracao subtraendo;
	subtraendo = f2;
	subtraendo.numerador*= -1;
	return soma(f1, subtraendo);
}

fracao multiplica(fracao f1, fracao f2) { // multiplica as fraC'C5es
	fracao produto;
	produto.numerador = f1.numerador * f2.numerador;
	produto.denominador = f1.denominador * f2.denominador;
	return simplifica(produto);
}

fracao divide (fracao f1, fracao f2) { // divide as fraC'C5es
	fracao quociente;
	quociente.numerador = f1.numerador * f2.denominador;
	quociente.denominador = f1.denominador * f2.numerador;
	return simplifica(quociente);
}

void mostra (fracao f) {
	printf("%d/%d", f.numerador, f.denominador);
}

void leFracao (fracao *f) {
	printf("Numerador: ");
	scanf ("%d", &(*f).numerador); // salva no endereC'o do conteudo de *f
	printf("Denominador: ");
	scanf("%d",&(*f).denominador);
}