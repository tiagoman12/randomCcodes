#include <stdio.h>
#include <string.h>
#define SIZE 5
#define SIZE2 70

char * s_gets(char * st, int n);
char *search(const char * st, int c);
int main(void)
{
    int c=0;
    int ch;
    char str[SIZE][SIZE2];
    printf("enter %d sentences or any input (press KEY to stop): ", SIZE);
    while (c < SIZE && s_gets(str[c], SIZE2) != NULL && str[c][0]!= '\0')
    {
        puts("enter any character to search.");
        ch=getchar();
        while (getchar()!= '\n')
            continue;
        puts(search(str[c], ch));
        c++;
    }

    puts("done!");
    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
        i++;
        if (st[i] == '\n')
        st[i] = '\0';

        else while (getchar() != '\n')
                continue;
    }
    return ret_val;
}

char *search(const char * st, int c)
{
    while (*st)
    {
        if(*st==c)
            return st;
        st++;
    }
    return NULL;
}
