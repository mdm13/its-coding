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

int main()
{
    printf("%d\n",i);

    fun1();
    printf("%d\n",i);
    
    fun2();
    printf("%d\n",i);
    
    return 0;
}

