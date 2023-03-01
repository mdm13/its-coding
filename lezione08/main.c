/******************************************************************************

tipi dati
bits and bit shift

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i=10;
    short j=5;
    long int k =90;
    
    //stampo le dimensioni degli interi in bytes
    printf("i=%d, size is %ld bytes\n",i,sizeof(i));
    
    printf("j=%d, size is %ld bytes\n",j,sizeof(j));
    
    printf("k=%d, size is %ld bytes\n",k,sizeof(k));
    
    
    //bit shift: moltiplico per 2*2=4
    int m=i<<2;
    
    
    printf("m=%d (bit shift)\n",m);
    
    

    return 0;
}

