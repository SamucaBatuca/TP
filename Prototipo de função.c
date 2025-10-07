#include <stdio.h>


/* Declaração da função cel*/
float cel (float far); // protótipo da função



void test(){
    printf("Deu certo\n");
}

int main()
{
    float c, f;
    printf("Digite a temperatura em Fahrenheit:\n");
    scanf ("%f", &f);
    c = cel (f);
    printf("Celsius = %.2f\n", c);

    return 0;
}

float cel (float far){
    float c = (far-32) * 5.0/9.0;
    test();
    return c;
}

