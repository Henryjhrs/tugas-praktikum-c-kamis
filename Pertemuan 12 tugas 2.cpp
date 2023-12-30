#include <stdio.h>

int main() {
    char A[11] = {'J', 'O', 'G', 'J', 'A', 'K', 'A', 'R', 'T', 'A', '\0'};
    int letterCount[26] = {0};  
    
    for (int i = 0; A[i] != '\0'; i++) {
        if (A[i] >= 'A' && A[i] <= 'Z') {
            letterCount[A[i] - 'A']++;
        }
    }

    char mostFrequentLetter;
    int maxCount = 0;
    for (int i = 0; i < 26; i++) {
        if (letterCount[i] > maxCount) {
            maxCount = letterCount[i];
            mostFrequentLetter = 'A' + i;
        }
    }

    printf("Huruf terbanyak: %c\nJumlah: %d\n", mostFrequentLetter, maxCount);

    return 0;
}
