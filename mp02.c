#include <stdio.h>

int tamanho(char *s);
char *inverter(char *s);        
void deslocar(char *s, int n);
char *trocarParesImpares(char *s);
void inverterCaixa(char *s);
void rotacionar(char *s, int n);
char *trocarMetades(char *s);

int main() {
    int nTransformacao; // número da transformação da string.
    char s[1000 + 1];
    int n;

    scanf("%1000[^\n]", s); // scanf da string
    scanf("%d", &nTransformacao); // scanf das transformações.

    while (nTransformacao >= 1 && nTransformacao <= 6) {
        switch (nTransformacao) {
            case 1: inverter(s); break;
            case 2: scanf("%d", &n); deslocar(s, n); break;
            case 3: trocarParesImpares(s); break;
            case 4: inverterCaixa(s); break;
            case 5: scanf("%d", &n); rotacionar(s, n); break;
            case 6: trocarMetades(s); break;
        }
        scanf("%d", &nTransformacao);
    }

    printf("%s\n", s);
    return 0;
}

// FUNÇÃO TAMANHO

int tamanho(char *s) {
    int tam = 0;
    while (s[tam] != '\0') {
        tam++;
    }
    return tam;
}

// FUNÇÃO INVERTER

char *inverter(char *s) {
    int tam = tamanho(s);
    int i;

    for (i = 0; i < tam / 2; i++) {
        char tmp = s[i];
        s[i] = s[tam - i - 1];
        s[tam - i - 1] = tmp;
    }
    return s;
}

// FUNÇÃO MOVER

void deslocar(char *s, int n) {
    int i = 0;
    int n26 = (n % 26 + 26) % 26;
    int n10 = (n % 10 + 10) % 10;

    while (s[i] != '\0') {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = (s[i] - 'A' + n26) % 26 + 'A';
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = (s[i] - 'a' + n26) % 26 + 'a';
        } else if (s[i] >= '0' && s[i] <= '9') {
            s[i] = (s[i] - '0' + n10) % 10 + '0';
        }
        i++;
    }
}

// FUNÇÃO TROCAR PARES E IMPARES

char *trocarParesImpares(char *s) {
    int tam = tamanho(s); // tamanho da string
    int i;

    for (i = 0; i + 1 < tam; i += 2) {
        char tmp = s[i];
        s[i] = s[i + 1];
        s[i + 1] = tmp;
    }
    return s;
}

// FUNÇÃO INVERTER CAIXA

void inverterCaixa(char *s) {
    int i = 0;

    while (s[i] != '\0') {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 'a' + 'A';
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] - 'A' + 'a';
        }
        i++;
    }
}

// FUNÇÃO ROTACIONAR

void rotacionar(char *s, int n) {
    int tam = tamanho(s);
    char tmp[1000 + 1];
    int j;

    if (tam == 0) return;

    n = (n % tam + tam) % tam;

    for (j = 0; j < tam; j++) {
        tmp[j] = s[(j - n + tam) % tam];
    }
    for (j = 0; j < tam; j++) {
        s[j] = tmp[j];
    }
}

// FUNÇÃO TROCA DE METADES

char *trocarMetades(char *s) {
    int tam = tamanho(s); // tamanho da string
    int metade = tam / 2;
    int inicio2 = metade + tam % 2;
    int i;

    for (i = 0; i < metade; i++) {
        char tmp = s[i];
        s[i] = s[inicio2 + i];
        s[inicio2 + i] = tmp;
    }
    return s;
}
