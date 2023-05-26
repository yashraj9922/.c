#include <stdio.h>
#include <string.h>
int main()
{
    int arr[10], j;
    char str[10], substr[5];
    printf("Enter the string ");
    gets(str);
    printf("Enter the sub-string ");
    gets(substr);
    int len1 = strlen(str), len2 = strlen(substr);
    for (int i = 0; i < len2; i++)
    {
        for (j = 0; i < len1; j++)
        {
            if(substr[i]==str[j])
            {
                // arr[j];
                
            }
        } 
    }
    for(int i = 0; i<len2; i++)
    {
        if(arr[i+1]==(arr[i]+1))
        {
            printf("Present");
        }
        else
        {
            printf("Absent");
        }
    }
    return 0;
}