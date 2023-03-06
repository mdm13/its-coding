/******************************************************************************
print out bits with pointers
*******************************************************************************/
#include <stdio.h>

// bit returned at location
int bit_return(int a, int loc)   
{
    int buf = a & 1<<loc;

    if (buf == 0) return 0;
    else return 1; 
}

int main()
{
    // 1 sign bit | 8 exponent bit | 23 fraction bits
    float a = 1.333; 
    int *b=(int *)&a;

    int i;
    for (i = 31; i >= 0; i--)
    {
        printf("%d",bit_return(*b,i));
    }


    return 0;
}
