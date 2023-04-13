#include <stdio.h>
#include "funzioni.h"

void print_message() {
    printf("messaggio su console\n");
}

//funzione ricorsiva
int fibo(int i) {
    if(i<=2) return 1;
    return fibo(i-1)+fibo(i-2);
}