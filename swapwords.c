#include <stdio.h>
#include <string.h>

int main() // app(1)as(2)as(3)ehe
{
    char sent[100];
    printf("Enter sentence: \n");
    fgets(sent, 100, stdin);

    int len = strlen(sent);
    int w2s = -1, w2e = -1, w3e = -1, c = 0;

    for (int i = 0; i < len; i++)
    {
        if (sent[i] == ' ')
        {
            c++;
            if (c == 1) w2s = i;
            if (c == 2) w2e = i;
            if (c == 3) w3e = i;
        }
    }

    if (w2s == -1 || w2e == -1 || w3e == -1) {
        printf("Input sentence must have at least three words.\n");
        return 1;
    }

    
    for (int i = 0; i < w2s; i++) // Print first word
    {
        printf("%c", sent[i]);
    }

    printf(" ");
    
    for (int i = w2e + 1; i < w3e; i++) // Print third word
    {
        printf("%c", sent[i]);
    }

    printf(" ");

    
    for (int i = w2s + 1; i < w2e; i++) // Print second word
    {
        printf("%c", sent[i]);
    }

    for (int i = w3e; i < len; i++)
    {
        printf("%c", sent[i]);
    }

    return 0;
}
