/******************************************************************************

Bits and operators

*******************************************************************************/
#include <stdio.h>

int main ()
{
 
    unsigned short us = 6;
  
    unsigned short mask = 017;

    printf("mask = %d\n",mask);
    
    unsigned short result=us & mask;
 

    //bit 'AND'
    printf("bit operator 'AND': %d\n",result);
  
    //bit 'OR'
    result=us | mask;
    printf("bit operator 'OR': %d\n",result);

    //bit 'XOR' or esclusivo
    result=us ^ mask;
    printf("bit operator 'XOR': %d\n",result);
    
    //bit 'NOT' (complemento)
    result= ~us;
    printf("bit operator 'NOT': %d\n",result);
    
    //bit shift
    result= us<<3;
    printf("bit shift: %d\n",result);
    
    //bit shift
    result= result>>1;
    printf("bit shift: %d\n",result);


  return 0;
}




