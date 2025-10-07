
#include <stdio.h>
#include "SamuelNumComplex.h"

int main (){
    
    /*
       ESTE CÓDIGO SERVE PARA DEMOSNTRAR AS FUNCIONALIDADES
       DA BIBLIOTECA "NumComplex.h"
    */
    
    // CRIAÇÃO DE NÚMEROS COMPLEXOS ATRAVÉS DA IMPORTAÇÃO DO TIPO "numPol" E "numRet"
    numPol a, b;
    numRet c, d;
    a.modulo = 15; a.teta = 60;
    b.modulo = 17; b.teta = -40;

    c.real = 54; c.imagi = 13;
    d.real = 12; d.imagi = -16;


    // PRINT FORMATADO NO NÚMERO COMPLEXO ESPECIFICADO
    printf("\nExemplo de numero polar: %s\n",formPol(a));
    printf("Exemplo de numero retangular: %s\n", formRet(d));


    //SOMA DE NÚMEROS POLARES
    numPol somaP = somaPol(a,b);
    printf("\nExemplo de soma polar: %s\n",formPol(somaP));


    //SOMA DE NÚMEROS RETANGULARES
    numRet somaR = somaRet(c,d);
    printf("Exemplo de soma retangular: %s\n",formRet(somaR));


    //SUBTRAÇÃO DE NÚMEROS POLARES
    numPol subP = subPol (a,b);
    printf("\nExemplo de subtracao polar: %s\n",formPol(subP));

    //SUBTRAÇÃO DE NÚMEROS RETANGULARES
    numRet subR = subRet (c,d);
    printf("Exemplo de subtracao retangular: %s\n",formRet(subR));

    
    //MULTIPLICAÇÃO POLAR
    numPol multP = multPol (a,b);
    printf("\nExemplo de multiplicacao polar: %s\n",formPol(multP));
    
    //MULTIPLICAÇÃO RETANGULAR
    numRet multR = multRet (c,d);
    printf("Exemplo de multiplicacao retangular: %s\n",formRet(multR));

    //DIVISÃO POLAR
    numPol divP = divPol (a,b);
    printf("\nExemplo de divisao polar: %s\n",formPol(divP));

    //DIVISÃO RETANGULAR
    numRet divR = divRet (c,d);
    printf("Exemplo de divisao retangular: %s\n",formRet(divR));

    //TRANFORMAÇÃO POLAR -> RETANGULAR
    numRet pr = polToRet (a);
    printf("\nForma polar: %s\t-->\t",formPol(a) );
    printf("Forma retangular: %s\n", formRet(pr));

    //TRANSFORMAÇÃO RETANGULAR -> POLAR
    numPol rp = retToPol(c);
    printf("\nForma polar: %s\t-->\t",formPol(rp));
    printf("Forma retangular: %s\n",formRet(c));

    
    return 0;

}
