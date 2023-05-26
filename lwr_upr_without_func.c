#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[100];  
    int i, j;

    printf("Enter  the string: ");
    gets(s);
    int len = strlen(s);
    for(i=0; i<len; i++)  
    {
        if(s[i]>=97 && s[i]<=122)
         s[i]=s[i]-32;
 	}
    printf("string in uppercase = %s\n", s);

    for(j=0; j<len; j++)
    {
        if(s[j]>=65 && s[j]<=90)
        {
            s[j]=s[j]+32;
        }
    }
    printf("string in lowercase = %s\n", s);
    return 0;
}