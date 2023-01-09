#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int ct= 0;
    double num;
    double sum=0;
    FILE * fp;
    if (argc > 2)
    {
        fprintf(stderr,"Usage: %s\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if (argc == 2){
        if ((fp = fopen(argv[1], "r"))== NULL)
        {
            fprintf(stderr,"cant open %s\n", argv[1]);
            exit(EXIT_FAILURE);
        }}

    else  fp= stdin;

    while((fscanf(fp,"%f", &num))==1)
    {
        sum+= num;
        ct++;
    }
    if (ct < 1)
        puts("no values entered");
    else printf("average= %f", sum/ct);

    return 0;
}
