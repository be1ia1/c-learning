#include <stdio.h>
#include <string.h>

int main()
{
    printf("Enter a string: ");
    char str[100];
    gets(str);
    int str_len = strlen(str);
    char *G;
    int  G1 = 100;
    int i = 0;
    while (i < str_len)
    {
        while (str[i] == ' ' && i < str_len) {
            i++;
        }
        int start = i;
        while (str[i] != ' ' && i < str_len) {
            i++;
        }
        int end = i;
        int current_len = end - start;
        if (current_len < G1)
        {
            G1 = current_len;
            strncpy(G, &str[start], current_len);
            G[current_len] = '\0';
        }
    }
    printf("Shortest word: %s\n", G);
    return 0;
}