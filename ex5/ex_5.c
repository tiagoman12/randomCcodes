#include <stdio.h>
#include <string.h>
#include "months.h"

int tot_days(char *);
int main(void)
{
    char *find;
    char temp[4];
    fputs("enter the abreviation name of month (enter to quit): ", stdout);
    while(fgets(temp, 4, stdin) != NULL)
    {
        if (temp[0]=='\n'){
            puts("done!");
            goto here;}
        while (getchar()!= '\n')
            continue;
        printf("total of days= %d\n", tot_days(temp));
        fputs("enter more: ", stdout);
    }
    here: return 0;
}

int tot_days(char *pt)
{
    int n, i;
    int total= 0;
    for (n=0; n < 12; n++)
    {
        if (strcmp(pt, arr[n].abbrev)==0)
        {
            for (i=0; i<=n; i++)
                total+= arr[i].days;
            break;
        }
    }
    if (total)
        return total;

    else {puts("unknown month");
    return (-1);}
}
