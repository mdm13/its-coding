/*
**/
#include <stdio.h>

int is_vocale(char c) {
    
    switch(c) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            return 1;
    }
    
    
    return 0;
}

int main()
{
    
    char ch;
    int nv=0;
    
    
    while((ch=getchar())!=EOF) {
        
        nv+=is_vocale(ch);
    }
    
    
    printf("\nil testo di input contiene %d vocali\n",nv);
    

    return 0;
}

