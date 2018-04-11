#include <stdio.h>

void selectionsort(int *a, int n)
{
    int i, j, minpos;
    int tmp;

    for (i = 0; i < n; i++) {
        minpos = i;
        for (j = i + 1; j <= n; j++) {
            if (a[j] < a[minpos])
                minpos = j;
        }
        tmp = a[i];
        a[i] = a[minpos];
        a[minpos] = tmp;
    }
}

int main(void)
{
    int a[] = {7, 99, -7, 13, 1, 8, -1, 100, 0, 2};
    int n, i;

    n = sizeof(a) / sizeof(a[0]) - 1;
    selectionsort(a, n);
    for (i = 0; i < n; i++) {
        printf("%d, ", a[i]);
    }
    printf("%d\n", a[n]);
}
