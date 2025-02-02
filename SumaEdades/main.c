#include <stdio.h>

struct edad {
    int valor;
};


int main() {
    struct edad edades[5];


    for (int i=0;i<5;i++) scanf("%d", &edades[i].valor);

    printf("Escriba los numeros que quiere sumar\n");
    printf("Suma de edades: %d\n", suma_edades(5, edades));

    return 0;
}

int suma_edades(int n,struct edad e[]) {
    int suma = 0;

    for (int i=0;i<n;i++) {
        suma += e[i].valor;
    }
    return suma;
}
