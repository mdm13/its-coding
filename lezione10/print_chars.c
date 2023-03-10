/*
caratteri
*/


#include <stdio.h>

int main()
{
    char ch='A'; //definisco un carattere
    
    printf("inserire un carattere\n");
    
    //il valore di 'A' viene sovrascritto dalla console
    scanf("%c",&ch);
    
    //stampo il valore numerico del carattere
    printf("il carattere è %c ovvero il numero %d\n",ch,ch);
    
    if(ch>='A' && ch<='Z') {
        printf("Il carattere %c è una lettera maiuscola\n",ch);
        printf("Il carattere minuscolo è %c\n",ch+32);
    } else if(ch>='0' && ch<='9') {
        printf("\tIl carattere %c è un numero\n",ch);
   
    }
    

    return 0;
}




