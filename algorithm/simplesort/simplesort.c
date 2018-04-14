#include <stdio.h>

void swap(int *p, int *q)
{
    int tmp;

    tmp = *p;
    *p = *q;
    *q = tmp;
}

void simplesort(int *a, int n)
{
    int i, j, index;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j <= n; j++) {
            if (a[i] > a[j])
                swap(&a[i], &a[j]);
        }
    }
}

int main(void)
{
    int a[] = {7, 99, -7, 13, 1, 8, -1, 100, 0, 2};
    int n, i;

    n = sizeof(a) / sizeof(a[0]) - 1;
    simplesort(a, n);
    for (i = 0; i < n; i++) {
        printf("%d, ", a[i]);
    }
    printf("%d\n", a[n]);
}
