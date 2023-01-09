// compile with pe12-2a.c
#include <stdio.h>
#include "pe12-2a.h"

int main(void)
{
    int mode;
    printf("Enter 0 for metric mode, 1 for US mode: ");
    while (scanf("%d", &mode)==1 && mode >=0)
    {
        while (getchar()!= '\n')
            continue;
        set_mode(mode);
        get_info();
        show_info();
        printf("Enter 0 for metric mode, 1 for US mode");
        printf(" (-1 to quit): ");
    }
    printf("Done.\n");
    return 0;
}
