

/******************************************************************************

Completare il programma 

*******************************************************************************/
#include <stdio.h>

void print_bits(int i,int k) {
    
    if(i&1<<k) {
        printf("1");
    } else {
        printf("0");
    }
    
}

int main()
{
    int i=3; //la rappresentazione binaria di 5 è 0101 ovvero 4+1
    
    /*
    print_bits(i,3);
    print_bits(i,2);
    print_bits(i,1);
    print_bits(i,0);
    */
    
    for(int k=3;k>=0;k--) {
        print_bits(i,k);
    }

    return 0;
}




