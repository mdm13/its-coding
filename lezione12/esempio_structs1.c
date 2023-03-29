/******************************************************************************
strutture
typedef

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    
    //struttura
    struct point  {
        int x;
        int y;
    } ;
    
    struct point pt= {1,2};
    
    printf("point: %d %d\n",pt.x,pt.y);
    
    //struttura
    typedef struct {
        char name[10];
        int age ;
        float height;
    } person;
    
    person p={"john",10,110};
    
    
    strcpy(p.name,"frank");
    
    
    printf("person %s %d %f",p.name,p.age,p.height);
    


    return 0;
}

