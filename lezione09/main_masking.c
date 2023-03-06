/******************************************************************************

Operazioni su bit, operatori

*******************************************************************************/
#include <stdio.h>

void f(int i) {
    
    short b0=1,b1=b0<<1,b2=b0<<2,b3=b0<<3,b4=b0<<4;
    short b5=b0<<5,b6=b0<<6,b7=b0<<7;
    
    printf("bits: ");
    
    if(i&b7) {
        printf("1");
    } else {
        printf("0");
    }
    
    if(i&b6) {
        printf("1");
    } else {
        printf("0");
    }
    
    if(i&b5) {
        printf("1");
    } else {
        printf("0");
    }
    
    if(i&b4) {
        printf("1");
    } else {
        printf("0");
    }
    
    printf(" ");
   
    if(i&b3) {
        printf("1");
    } else {
        printf("0");
    }
    
    if(i&b2) {
        printf("1");
    } else {
        printf("0");
    }
    
    if(i&b1) {
        printf("1");
    } else {
        printf("0");
    }
    
    if(i&b0) {
        printf("1");
    } else {
        printf("0");
    }
    
   
    
    
    
    
    
    printf("\n");
    
}

void fl(int i) {
    short b=1;
    for(int k=7;k>=0;k--) {
        int mask=b<<k;
        if(i&mask) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");
}

int main()
{
    
    short i=5;
    short mask=0xFF;

    printf("i = %d, mask = %d\n",i,mask);

    //masking  and
    short s=i & mask;
    printf("i 'and' mask: s = %d\n",s);
    
    //masking  or
    s=i | mask;
    printf("i 'or' mask: s = %d\n",s);
    
    //masking  xor
    s=i ^ mask;
    printf("i 'xor' mask: s = %d\n",s);
    
    //masking  complemento a uno
    s=~i;
    printf("i 'not' mask: s = %d\n",s);
    
    //stampa bits
    f(mask);
    f(i);
    

    return 0;
}


