/******************************************************************************
char  arrays
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[]="hello world";
    
    int l=sizeof(s);
    int n=strlen(s);
    
    printf("size of s is %d\n",l);
    printf("num chars of is %d\n",n);
    
    s[12]='H';
    printf("string s = %s\n",s);
    
    /*
    for(int i=0;i<l;i++) {
        printf("%c %d\n",s[i],s[i]);
    }
    
    printf("string s = %s\n",s);
*/
    return 0;
}

