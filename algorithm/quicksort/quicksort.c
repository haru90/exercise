#include <stdio.h>

int a[] = {7, 99, -7, 13, 1, 8, -1, 100, 0, 2};

void sort(int left, int right)
{
    int p, i, somewhere;
    int pivot;
    int tmp;

    if (left < right) {
        somewhere = (left + right) / 2;
        pivot = a[somewhere];
        a[somewhere] = a[left];
        p = left;
        for (i = left + 1; i <= right; i++) {
            if (a[i] < pivot) {
                p++;
                tmp = a[i];
                a[i] = a[p];
                a[p] = tmp;
            }
        }
        a[left] = a[p];
        a[p] = pivot;
        sort(left, p - 1);
        sort(p + 1, right);
    }
}

void quicksort(int n)
{
    sort(0, n);
}

int main(void)
{
    int n, i;

    n = sizeof(a) / sizeof(a[0]) - 1;
    quicksort(n);

    for (i = 0; i < n; i++) {
        printf("%d, ", a[i]);
    }
    printf("%d\n", a[n]);

    return 0;
}
