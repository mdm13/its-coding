/******************************************************************************
float swap function
*******************************************************************************/
#include <stdio.h>

void swap(float *a,float *b) {
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

int main()
{
    float x=10.0, y=11.0;
    
    printf("%f %f\n",x,y);
    
    swap(&x,&y);
    
    printf("%f %f\n",x,y);

    return 0;
}

