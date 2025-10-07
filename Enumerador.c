#include <stdio.h>



int main()
{
    enum Mes {Jan = 1, fev, mar, abr, mai, jun, jul, ago, sete, outu, nov, des}; // enumera esses termos
    
    typedef enum {Seg = 1, ter, qua, qui, sex, sab, dom} Dia; // outra maneira de enumerar termos
    
    int m1 = des;
    int d1 = qua;
    printf("%d %d\n", m1, d1);
}