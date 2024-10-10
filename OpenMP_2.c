/*
Ejercicio 2: Control de Número de Hilos - Escribe un programa que determine 
el número máximo de hilos disponibles en tu sistema utilizando omp_get_num_procs(). 
Luego, ajusta el número de hilos a la mitad de ese valor y crea una región paralela 
donde cada hilo imprima su número de identificación y el número total de hilos en 
ejecución.

Indicaciones:

Usa omp_get_num_procs() para determinar el número de procesadores disponibles.
Ajusta el número de hilos a la mitad del número de procesadores disponibles usando 
omp_set_num_threads().
Dentro de la región paralela, imprime el ID del hilo y el número total de hilos 
utilizando omp_get_thread_num() y omp_get_num_threads().
*/

#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main(){
    int num_procesadores_disponibles = omp_get_num_procs();
    int threads = num_procesadores_disponibles/2;

    #pragma omp parallel num_threads(threads)
    {
        printf("Hola desde el hilo %d y la cantidad total de hilos es %d\n", omp_get_thread_num(), omp_get_num_threads());

    }

    return 0;
}