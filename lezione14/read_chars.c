/******************************************************************************

conta i caratteri

Ctrl D per EOF da console interattiva

*******************************************************************************/
#include <stdio.h>



int main()
{

    char ch;
    int nc=0;
    ch=getchar();
    while(ch != EOF) {
        ++nc;
        ch=getchar();
    }
    
    printf("caratteri: %d\n",nc);
    
    
    return 0;
}



