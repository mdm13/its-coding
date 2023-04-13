/*

*/
#include <stdio.h>

int fac(int i);

int main()
{
    for(int i=0;i<=8;i++) {
        int f=fac(i);
        printf("%d fattoriale = %d\n",i,f);
    }
    return 0;
}

int fac(int i) {
    
    if(i<=0) return 1;
    
    return i*fac(i-1);
}




