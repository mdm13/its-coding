/******************************************************************************
to-upper
*******************************************************************************/
#include <stdio.h>
#include <string.h>

void toUpper(char s[]) {
    
    int i=0;
    int l=strlen(s);
    
    while(i<l) {
        char c=s[i]>='a' && s[i]<='z' ? s[i]-32 : s[i];
        printf("%c",c);
        i++;
    }
}

int main()
{
    char s[]="hello world!";
    
    printf("size is %d\n",sizeof(s));
    printf("length is %d\n",strlen(s));

    toUpper(s);



    return 0;
}

