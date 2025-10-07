#include <stdio.h>




void test(){
    printf("Deu certo\n"); // não enxerga a função cel pq ela ta na main
}

int main()
{
    float c, f;
    float cel (float); //Declaração local da função cel
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

