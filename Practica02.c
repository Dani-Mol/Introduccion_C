#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int numArgs;
float suma, multi;

float media_aritmetica(float datos [], int n){
    suma = 0.0;
    for (int i = 0; i < n; i++){
        suma += datos[i];
    }
    return suma/n;
}

float media_armonica(float datos [], int n){
    suma = 0.0;
    for (int i = 0; i < n; i++){
        suma += 1.0/datos[i];
    }
    return n/suma;
    
} 

float media_geometrica(float datos [], int n){
    multi = 1.0;
    for (int i = 0; i < n; i++){
        multi *= datos[i];
    }
    return pow(multi, 1.0/n);
}

int main(int argc, char* argv[]){
    if (argc < 3) {
        printf("Uso: %s <A|H|G> <lista de números>\n", argv[0]);
        return 1;
    }

    char opcion = argv[1][0];
    int n = argc - 2;  // Número de datos de entrada
    float datos[n];

    for (int i = 0; i < n; i++) {
        datos[i] = atof(argv[i + 2]);
    }

    float resultado = 0.0;

    switch (opcion) {
        case 'A':
            resultado = media_aritmetica(datos, n);
            break;
        case 'H':
            resultado = media_armonica(datos, n);
            break;
        case 'G':
            resultado = media_geometrica(datos, n);
            break;
        default:
            printf("Opción no válida. Use 'A' para media aritmética, 'H' para media armónica, o 'G' para media geométrica.\n");
            return 1;
    }

    printf("El resultado de la media es: %.2f\n", resultado);

    return 0;

}


