/******************************************************************************

floats e vettori

*******************************************************************************/
#include <stdio.h>

#define SIZE 4

int main()
{
 
    
    float f=15.26541;
    printf("il valore di f = %7.2f\n",f);
    printf("il numero di bytes = %d\n",sizeof(f));
    
    int v[SIZE]={10,11,12,13};
    for(short unsigned int i=0;i<5;i++) {
        printf("l'elemento con indice %d ha valore %d\n",i,v[i]);
    }
    
    
    
    
    return 0;
}

