/******************************************************************************

bits

*******************************************************************************/
#include <stdio.h>

#define SIZE 4

int main()
{
    
    int i=1;
    int j=2;
    int k=i&j;
    int n=i|j;
    
    printf("il valore di 1&2 = %d   \n",k);
    
    printf("il valore di 1|2 = %d   \n",n);
    
    printf("lo shift bit di 10<<2 = %d \n",10<<2);
   
    i=5;
    int r=i&1<<1;
    
    if(r!=0) {
        printf("il secondo bit di %d = 1 \n",i);
    } else {
        printf("il secondo bit di %d = 0 \n",i);
    }
    
    short  s=0xffff;
    short  u=s+1;
    
    printf("0xffff   = %d\n",s);
    printf("0xffff+1 = %d\n",s+1);
   
    
    
      
    

    return 0;
}

