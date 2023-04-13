/*
 funzioni
*/
#include <stdio.h>
#include "funzioni.h"

int main()
{
    //print_message();

    int i=4;
    
    printf("inserisci un numero:\n");
    
    scanf("%d",&i);
    
    printf("fibo(%d)=%d\n",i,fibo(i));

    return 0;
}


