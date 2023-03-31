/******************************************************************************



*******************************************************************************/
#include <stdio.h>

enum week { Lun=10, Mar=20, Mer=30, Gio=40, Ven=50 , Sab=60, Dom=70 } ;

int main()
{
    typedef enum week GiornoSettimana;
    
    GiornoSettimana giorno;
    
    giorno=Mer;
    
    printf("valore di giorno = %d\n",giorno);

    return 0;
}


