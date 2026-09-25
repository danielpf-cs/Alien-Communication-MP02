#include <stdio.h>

// FUNÇÃO INVERTER

char *inverter(char *s)
{
    int i;
    int tam = 0;

    while (s[tam] != '\0')
    {
        tam++;
    }

    for (i = 0; i < tam / 2; i++)
    {
        char tmp = s[i];
        s[i] = s[tam - i - 1];
        s[tam - i - 1] = tmp;
    }
    return s;
}

// FUNÇÃO MOVER

void deslocar(char *s, int n)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = (s[i] - 'A' + n) % 26 + 'A'
        }
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = (s[i] - 'a' + n) % 26 'a';
        }
        if (s[i] >= '0' && s[i] <= '9')
        {
            s[i] = (s[i] - '0' + n) % 10 + '0';
        }
        printf("%c", s[i]);
        i++;
        printf("\n");
    }
}

// FUNÇÃO TROCAR PARES E IMPARES

char *trocarParesImpares(char *s)
{
    int i;
    int tam = 0;
    // tamanho da string
    while (s[tam] != '\0')
    {
        tam++;
    }

    for (i = 0; i + 1 < tam; i += 2)
    {
        char tmp = s[i];
        s[i] = s[i + 1];
        s[i + 1] = tmp;
    }
    return s;
}

// FUNÇÃO INVERTER CAIXA

void inverterCaixa(char *s)
{
    int i;
    while (s[i] != '0')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
        printf("%c", s[i]);
        i++;
    }
}

// FUNÇÃO ROTACIONAR

#include <stdio.h>

void rotacionar (char *s, int n){

    int tam=0;
    int j;
    
    char tmp [256];
    
    while(s[tam]!='\0'){
        
        tam++;
    
    }
    
    for(j=0;j<tam;j++){
    
        tmp[j] = s[(j + n) % tam]; 
    
    }
    
    for(j=0;j<tam;j++){
        s[j]=tmp[j];
        
        printf("%c", tmp[j]);
    }
    
    printf("\n");

}
