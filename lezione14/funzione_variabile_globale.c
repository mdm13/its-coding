/**/
#include <stdio.h>

int i=10;

void fun() {
    i++;
}

int main()
{
    printf("i=%d\n",i);
    
    fun();
    
     printf("i=%d\n",i);

    return 0;
}

