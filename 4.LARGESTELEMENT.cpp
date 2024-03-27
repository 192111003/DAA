#include <stdio.h>

int main() {
    int array[100], n, i;
    int max;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    max = array[0];
    for (i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    printf("The largest element in the array is: %d\n", max);

    return 0;
}

