#include <stdio.h>

int numb_posit (int *, int);
float average (int[], int);
int largest(int[], int);
int main(void)
{
    int n, limit;
    printf("enter value for n: ");
    scanf("%d", &n);
    int index [n];
    printf("enter %d numbers: ", n);
    for (limit= 0; limit < n; limit++)
        scanf("%d", &index[limit]);
    printf("largest number in array is %d\n", largest(index, n));
    printf("average value is %.2f\n", average(index, n));
    printf("there are %d positive numbers\n", numb_posit(index, n));
    return 0;
}

int largest(int * ptr, int n)
{
    int limit, largest;
    largest= ptr[0];

    for (limit=0 ; limit < n; limit++)
        largest= (ptr[limit] > largest)? ptr[limit] : largest;

    return largest;
}

float average(int a[], int n)
{
    int limit;
    int total= 0;

    for (limit= 0; limit < n; limit++)
        total+= a[limit];

    return ((float)total/(float)n);
}

int numb_posit(int a[], int n)
{
    int total=0;
    int limit;

    for (limit= 0; limit < n; limit++)
    {
        if (a[limit] >= 0)
            total+=1;
    }
    return total;
}
