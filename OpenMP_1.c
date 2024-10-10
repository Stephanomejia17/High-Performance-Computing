/*
Ejercicio 1: Introducción a Regiones Paralelas - Escribe un programa en C 
que cree una región paralela utilizando 4 hilos. Cada hilo debe imprimir 
su número de identificación (ID) y un mensaje de "Hola desde el hilo X". 
Usa la función omp_get_thread_num() para obtener el ID del hilo.

Indicaciones:

Usa la directiva #pragma omp parallel para crear la región paralela.
Limita el número de hilos a 4 utilizando omp_set_num_threads() o la variable 
de entorno OMP_NUM_THREADS.
Resultado esperado: Cada hilo debe imprimir un mensaje indicando su número de
hilo y la frase "Hola desde el hilo X", donde X es el número del hilo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main(){
    #pragma omp parallel num_threads(4)
    {
        int numero_thread = omp_get_thread_num();

        printf("Hola desde el hilo %d\n", numero_thread);
    }
    return 0;
}