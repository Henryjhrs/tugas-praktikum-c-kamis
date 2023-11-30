#include <stdio.h>

int main() {
    int A[11]; 
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999}; 
    int count = 0; 

    printf("a.\n");
    for (int i = 0; data[i] != 999 && count < 11; i++) {
        if (data[i] > 9) {
            A[count] = data[i];
            count++;
            printf("%d ", A[count - 1]);
        }
    }

    printf("\nb.\n");
    count = 0;
    for (int i = 0; data[i] != 999 && count < 11; i++) {
        if (data[i] > 9) {
            A[count] = data[i];
            count++;
            printf("%d ", A[count - 1]);
            while (data[i + 1] > 9 && data[i + 1] != 999) {
                i++;
                A[count] = data[i];
                count++;
                printf(" %d", A[count - 1]);
            }
            printf("\n");
        }
    }

    printf("\nc.\n");
    count = 0;
    for (int i = 0; data[i] != 999 && count < 11; i++) {
        if (data[i] > 9) {
            A[count] = data[i];
            count++;
            printf("%d ", A[count - 1]);
            while (data[i + 1] > 9 && data[i + 1] != 999) {
                i++;
                A[count] = data[i];
                count++;
                printf("%d ", A[count - 1]);
            }
            printf("\n");
        }
    }

    printf("\nd.\n");
    count = 0;
    for (int i = 0; data[i] != 999 && count < 11; i++) {
        if (data[i] % 2 != 0 && data[i] != 999) {
            A[count] = data[i];
            count++;
            printf("%d ", A[count - 1]);
        }
    }
    printf("\n");

    printf("\ne.\n");
    count = 0;
    for (int i = 0; data[i] != 999 && count < 11; i++) {
        if (data[i] % 2 != 0 && data[i] != 999) {
            A[count] = data[i];
            count++;
            printf("%d ", A[count - 1]);
        }
    }

    return 0;
}