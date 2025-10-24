#include <stdio.h>

int main() {
    int n, num, max = -1; // start with -1 (since we want positive only)

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);

        if (num > 0 && num > max) { // check if positive and greater
            max = num;
        }
    }


        printf("Maximum positive number: %d\n", max);
    }



