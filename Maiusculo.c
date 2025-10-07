#include <stdio.h>


unsigned char maiusc (unsigned char ch){
    if (ch >= 'a' && ch <= 'z'){
        return (ch - 'a' + 'A'); // faz maiusculo
    }
    return ch;
}

int main()
{
    unsigned char f, c;
    printf("Digite uma letra: \n");
    scanf ("%c", &c);
    f = maiusc (c);
    printf("%c %c", c, f);

    return 0;
}



