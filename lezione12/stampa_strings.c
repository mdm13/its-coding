/******************************************************************************
string e chars

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void print_chars(char s[])  {
    
    printf("funzione print_chars()\n");
    //stampa i singoli caratteri della stringa, escluso il terminatore \0
    int len=strlen(s);
    for(int i=0;i<len;i++) {
        printf("%d %c %x\n",i,s[i],s[i]);
    }
}

void to_upper(char s[])  {
    
    printf("funzione print_chars()\n");
    //stampa i singoli caratteri della stringa, escluso il terminatore \0
    int len=strlen(s);
    for(int i=0;i<len;i++) {
        if(s[i]>='a' && s[i]<='z') {
            s[i]=s[i]-32;
        }
    }
}

int count_chars(char s[],char c)  {
    
    int n=0;
    //stampa i singoli caratteri della stringa, escluso il terminatore \0
    int len=strlen(s);
    for(int i=0;i<len;i++) {
        if(s[i]==c) n++;
    }
    return n;
}

int main()
{
    //dichiarazione stringa: array di caratteri
    //nota utilizziamo solo caratteri ASCII
    char s2[]="my name is";
    printf("la stringa s2: '%s' ha dimensioni %ld\n",s2,sizeof(s2));
    
    s2[0]='M';
    printf("la stringa modificata è s2: '%s'\n",s2);
    
    //stampa i singoli caratteri della stringa, escluso il terminatore \0
    int size=sizeof(s2);
    for(int i=0;i<size;i++) {
        printf("%d %c %x\n",i,s2[i],s2[i]);
    }
    
    //stampa i singoli caratteri della stringa, escluso il terminatore \0
    int len=strlen(s2);
    for(int i=0;i<len;i++) {
        printf("%d %c %x\n",i,s2[i],s2[i]);
    }
    
    /*
    
    char s3[50]="my name is";
    printf("la stringa s3: '%s' ha dimensioni %ld\n",s3,sizeof(s3));
    */
    
    print_chars(s2);
    char c='a';
    printf("s2 has char '%c' %d times",c,count_chars(s2,c));
    
    to_upper(s2);
    printf("s2 to upper is %s",s2);
   

    return 0;
}


