#include <stdio.h>

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int N, i, ada = 0;

    printf("Isi array:\n");
    for (i = 0; i < 11; i++) {
        printf("%d ", A[i]);
    }

    printf("\nMasukkan bilangan integer = ");
    scanf("%d", &N);

    printf("Hasil: ");
    for (i = 0; i < 11; i++) {
        if (A[i] == N) {
            ada = 1;
            printf("ADA\nLokasi bilangan yang sama:");
            break;
        }
    }
    
    if (ada) {
        for (i = 0; i < 11; i++) {
            if (A[i] == N) {
                printf("%d ", i);
            }
        }
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}
