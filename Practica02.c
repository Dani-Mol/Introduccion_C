#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int numArgs;


float media_aritmetica(float datos [], int n){
    float suma = 0;
    for (int i = 0; i < n; i++){
        suma += datos[i];
    }
    return suma/n;
}

float media_armonica(float datos [], int n){
    

} 

float media_geometrica(float datos [], int n){
    float multi = 0;
    for (int i = 0; i < n; i++){
        multi *= datos[i];
    }
    return sqrt(multi);
}

int main(int argc, char* argv[]){
    numArgs = argc - 2; 
}


