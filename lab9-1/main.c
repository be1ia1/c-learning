#include <stdio.h>
#define S 80
#define F 50

int row = 5, col = 7, num;

void write_mas(F]);
void read_file(char name[F]);

void write_file(char name[F])
{
    char str[S];
    FILE *fp;
    if ((fp = fopen(name, "w")) == NULL)
    {
        printf("Error while openning file..\n");
        exit(1);
    }
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; i < row; i++)
        {
            fgets(str, sizeof(str), stdin);
            fputs(str, fp);
        }
    }
    fclose(fp);
}

void read_file(char name[F]) {
    char str[S];
    FILE *fp;
    if ((fp = fopen(name, "r")) == NULL) {
        printf("Error while openning file..\n");
        exit(1);
    }
    while (fgets(str,S, fp))
    printf("%s", str);
    fclose(fp);
}

int main()
{
    int array[row][col];
    char fname[F];

    printf("Введiть iм'я файлу:\n"); 
    scanf("%s", fname); 
    // write_mas(mas1); 
    write_mas_file(fname, mas1); 
    read_mas_file(fname, mas2); 
    return 0

    return 0;
}