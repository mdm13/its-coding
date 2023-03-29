/******************************************************************************
struct
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    
    struct casa {
      int x;
      int y;
      float peso;
      char nome[15];
    };
    
    struct casa pt={7,2,3.5,"Magione"};
    
    pt.x=100;
    strcpy(pt.nome,"Villetta");
    //pt.nome="Villetta";
    
    printf("value of pt per x: %d\n",pt.x);
    printf("value of pt per y: %d\n",pt.y);
    printf("value of pt per peso: %f\n",pt.peso);
    printf("value of pt per nome: %s\n",pt.nome);
    
    
    
    
    
    

    return 0;
}

