/******************************************************************************

switch-case and enums

*******************************************************************************/
#include <stdio.h>

enum state {Waiting, Off, Running, Alert, Danger, Maintenence};

char * getDesc(enum state s) {
    
    //utilizzare le istruzioni switch case per completare la funzione
    switch(s) {
        case Waiting:
        case Off:
            return "Macchina ferma";
        
    }
    
    
    return "non definito";
}

int main()
{
    
    enum state currentState[6] = {Waiting, Off, Running, Alert, Danger, Maintenence};
    
    for(int i=0;i<6;i++) {
        enum state s =currentState[i];
        printf("state %d: %s\n",s,getDesc(s));
    }
    
    return 0;
}


