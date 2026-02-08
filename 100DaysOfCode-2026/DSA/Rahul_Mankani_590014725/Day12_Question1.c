#include <stdio.h>
#include <string.h>

int Rotation(char *s1, char *s2) 
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);    
    if (len1 != len2 || len1 == 0) 
    {
        return 0;
    }
    // s1 ko double karke ek naya string banao
    char temp[200];
    strcpy(temp, s1);
    strcat(temp, s1);    
    if (strstr(temp, s2) != NULL) 
    {
        return 1;
    }
    return 0;
}
int main() 
{
    char s1[100];
    char s2[100];    
    printf("Enter the first string: ");
    fgets(s1, sizeof(s1), stdin);
    if (s1[strlen(s1) - 1] == '\n') 
    {
        s1[strlen(s1) - 1] = '\0';
    }    
    printf("Enter the second string: ");
    fgets(s2, sizeof(s2), stdin);
    if (s2[strlen(s2) - 1] == '\n') 
    {
        s2[strlen(s2) - 1] = '\0';
    }    
    if (Rotation(s1, s2)) 
    {
        printf("'%s' is a rotation of '%s'\n", s2, s1);
    } 
    else 
    {
        printf("'%s' is not a rotation of '%s'\n", s2, s1);
    }
    return 0;
}
