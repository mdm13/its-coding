/******************************************************************************

variabili locali e globali

*******************************************************************************/
#include <stdio.h>

int i=10;


void fun1() {
    i++;
}

void fun2() {
    int i=0;
    i++;
}

void fun3() {
    static int i=1;
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
    
    return 0;
}

