#include <stdio.h>
#include <string.h>

int main()
{
    printf("Enter a string: ");
    char str[80];
    gets(str);
    char sep[2] = " ";
    char *istr;
    istr = strtok(str, sep);
    if (istr == NULL) {
        printf("String is empty or contains only spaces.\n");
        return 1;
    }
    char *min_word = istr;
    int min_len = strlen(min_word);
    while (istr != NULL)
    {
        int current_len = strlen(istr);
        if (current_len < min_len)
        {
            min_len = current_len;
            min_word = istr;
        }
        istr = strtok(NULL, sep);
    }
    printf("Minimal word is: %s\n", min_word);
    return 0;
}