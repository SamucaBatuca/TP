/*
  ALUNO: SAMUEL ISAAC ANDRADE MARTINS
  MATRÍCULA: 20251003301415
  CURSO: ENGENHARIA DA COMPUTAÇÃO
*/


#ifndef SAMUELNUMCOMPLEX_h
#define SAMUELNUMCOMPLEX_H
#endif

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M_PI 3.14159265358979323846
char bufferNumComplex [50];

typedef struct numPol{ // representação Polar
    float modulo; // representa o M
    float teta; // representa o ângulo
} numPol;

typedef struct numRet { // representação Retangular
    float real; // representa o A
    float imagi; // representa o iB
} numRet;


/*  O PROTÓTIPO DAS FUNÇÕES   */
char* formRet (numRet a);
char* formPol (numPol a);

numPol retToPol(numRet a);
numRet polToRet(numPol a);

numRet somaRet(numRet a, numRet b);
numPol somaPol(numPol a, numPol b);

numRet subRet(numRet a, numRet b);
numPol subPol(numPol a, numPol b);

numRet multRet(numRet a, numRet b);
numPol multPol(numPol a, numPol b);

numRet divRet(numRet a, numRet b);
numPol divPol(numPol a, numPol b);



/*  CORPO DAS FUNÇÕES   */
numRet somaRet(numRet a, numRet b){ // soma de retangulares
    numRet c;
    c.real = a.real + b.real;
    c.imagi = a.imagi + b.imagi;
    return c;
}

numRet subRet(numRet a, numRet b){ // subtração de retangulares
    numRet c;
    c.real = a.real - b.real;
    c.imagi = a.imagi - b.imagi;
    return c;
}

numRet multRet(numRet a, numRet b){ // multiplicação de retangulares
    numRet c;
    c.real = a.real*b.real + ((a.imagi*b.imagi)* -1);
    c.imagi = (a.real * b.imagi) + (a.imagi * b.real);
    return c;
}

numRet divRet(numRet a, numRet b){ // divisão de retangulares
    numRet c;
    c.real = ((a.real * b.real) + (a.imagi * b.imagi) * -1)/(b.real * b.real) + (b.imagi*b.imagi*-1); // calcula parte real
    c.imagi = ((a.imagi * b.real) + (a.real * b.imagi)) / (b.real * b.real) + (b.imagi*b.imagi*-1); // calcula parte imaginária
    return c;
}

numPol retToPol(numRet a){ // transformação de retangular para polar
    numPol c;
    c.modulo = sqrt((a.real * a.real) + (a.imagi * a.imagi)); //calcula o módulo
    c.teta = (atan2(a.imagi,a.real)* 180.0/ M_PI); // calcula o angulo em radiano e converte pra graus
    return c;
}

numRet polToRet(numPol a){ // transformação de polar para retangular
    numRet c;
    double teta = a.teta * (M_PI/180); // transforma o angulo em radianos
    c.real = a.modulo * cos(teta); // pega a parte real com o cosseno de teta radiano
    c.imagi = a.modulo * sin (teta);  // pega a parte imaginária com o seno de teta radiano
    return c;
}

numPol somaPol(numPol a, numPol b){ // soma polar
    numRet A, B, C;
    numPol c;
    A = polToRet (a); // transforma A
    B = polToRet (b); // transforma B
    C = somaRet (A, B); // soma ambos
    c = retToPol (C); // destransforma C
    return c;
}

numPol subPol(numPol a, numPol b){ // subtração polar
    numRet A, B, C;
    numPol c;
    A = polToRet (a); // transforma A
    B = polToRet (b); // transforma B
    C = subRet (A, B); // subtrai ambos
    c = retToPol (C); // destransforma C
    return c;
}

numPol multPol(numPol a, numPol b){ // multiplicação de polar
    numPol c;
    c.modulo = a.modulo * b.modulo;
    c.teta = a.teta + b.teta;
    return c;
}

numPol divPol(numPol a, numPol b){ // divisão de polar
    numPol c;
    c.modulo = a.modulo / b.modulo;
    c.teta = a.teta - b.teta;
    return c;
}

char* formRet (numRet a){ // formata em um buffer a forma de se escrever a forma retnagular
   
    if (a.imagi > 0){
        snprintf(bufferNumComplex, 50, "%.2f+j%.2f", a.real, a.imagi); 
    } else {
        snprintf(bufferNumComplex, 50, "%.2f-j%.2f", a.real, a.imagi*(-1));
    }
    
    return bufferNumComplex;
}

char* formPol (numPol a){ // formata em um buffer a forma de se escrever a forma polar
    snprintf(bufferNumComplex, 50, "%.2f <%.2f%c", a.modulo, a.teta, 248);
    
    return bufferNumComplex;
}