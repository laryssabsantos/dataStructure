#include <stdio.h>
#include <string.h>
 
int palin(char [100], int, int);
 
int main()
{
    int i=0, j=0;
    char pal[100];
 
    printf("Digite uma palavra: ");
    scanf("%s", &pal);
    j=strlen(pal);
    i=0;
    if(palin(pal, i, j-1)==0)
        printf("\nA palavra não é um palindromo.\n");
    else
        printf("\nA palavra é um palindromo.\n");
 
    return 0;
}
int palin(char pal[100], int i, int j)
{
    if(j-i<0)
        return 1;
    else
    {
        if(pal[i]!=pal[j])
            return 0;
        else
            return palin(pal, i+1, j-1);
    }
}
