#include <stdio.h>

//para definir o novo tipo de uma variavel, usa-se typedef
typedef int inteiro;
typedef float real;

// para definir tipos heterogenios, utilizamos structs
struct cadastro {
    int idade;
    char nome[30];
    float saldo;
} cliente1, cliente2;


//para criar um tipo de estrutura, basta somar os dois
typedef struct valor {
    int matrícula;
    float taxa;
    char mes [10];
} valor; // defini um typedef chamado valor e um tipo de estrutura chamada valor


int main()
{
    real x;
    float y;
    int w;
    inteiro z;
    
    x = y = w = z = 2.5;
    printf("%f %f %d %d\n", x, y, w, z);
    
    struct cadastro cliente;// criou mais um cliente
    
    printf("Digite a idade do cliente:\n");
    scanf("%d", &cliente.idade);
    printf("a idade é: %d\n", cliente.idade);
    
    struct valor v1;
    v1.taxa = 0.05;
    valor v2;
    v2.taxa = 0.06;
    
    printf("%f %f\n", v1.taxa, v2.taxa);
    

    return 0;
}