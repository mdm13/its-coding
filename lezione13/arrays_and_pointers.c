/******************************************************************************

array and pointers

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char * c="Hello World";
    //c[0]='h';
    printf("%ld %ld\n",sizeof(c),strlen(c));
    printf("%s\n",c);
    
   
    
    char s[]="Hello World";
    
    printf("%ld %ld\n",sizeof(s),strlen(s));
    printf("%s\n",s);

    return 0;
}

