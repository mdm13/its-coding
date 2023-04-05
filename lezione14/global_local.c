/******************************************************************************

variabili locali e globali (ambito/scope)
durata automatica e fissa

*******************************************************************************/
#include <stdio.h>

int i=10;  //variabile globale (ambito): definita fuori di qualsiasi funzione


void fun1() {
    i++;    //richiamiamo una variabile globale all'interno di una funzione
}

void fun2() {
    int i=0;  //variabile locale (ambito) con durata automatica: definita all'interno di una funzione
    i++;
}

void fun3() {
    static int i=1;   //variabile locale (ambito) con durata fissa (statica): inizializzata all'avvio del programma e non all'inizio della funzione
    printf("static int = %d\n",i);
    
    i++;
}

int main()
{
    printf("global i = %d\n",i);

    fun1();
    printf("global i = %d\n",i);
    
    fun2();
    printf("global i = %d\n",i);
    
    fun3();
    fun3();
    
    {
        int i=50;
        printf("i di blocco=%d\n",i);
    }
    {
        printf("i globale = %d\n",i);
    }   
    
    
    return 0;
}

