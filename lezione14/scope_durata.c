/*
scope e durata
*/
#include <stdio.h>

int n=80;

void fun() {
    int k=7;
    printf("k=%d\n",k);
    fun2();
}

void fun2() {
    int k=8;
    printf("k=%d\n",k);
    
    printf("n=%d\n",n);
}

int main()
{
    printf("n=%d\n",n);
    
    int i=10;
    printf("i=%d\n",i);
    fun();

    return 0;
}

