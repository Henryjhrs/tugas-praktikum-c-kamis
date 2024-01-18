#include <stdio.h>
#include <unistd.h>


void start_motor(int speed) {
  printf("Motor speed diatur jadi %d rpm\n", speed);
}

void start_pump() {
  printf("Pompa menyala\n");
}

int main() {
  int ntu_levels[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};
  int kecepatan_motor[] = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
  int waktu_cuci[] = {60, 60, 60, 60, 60, 60, 60, 60, 60};
  int ntu, i;


printf (" Tekan Start\n");
    printf("Masukkan level kekeruhan air (NTU): ");
    scanf("%d", &ntu);


            int selected_level = -1;
    for (i = 0; i < sizeof(ntu_levels) / sizeof(ntu_levels[0]); ++i) {
        if (ntu <= ntu_levels[i]) {
            selected_level = i;
            break;
        }
    }

    if (selected_level != -1) {
        printf("Mesin cuci akan mencuci pada level kekeruhan air %d (NTU).\n", ntu_levels[selected_level]);
         printf("Waktu 60 menit\n");
 start_motor(kecepatan_motor[selected_level] / 2);
        
        printf("Motor listrik pembuka klep pengisian air aktif selama 2 menit\n");
        printf("Mengaktifkan motor listrik dengan kecepatan %d rpm...\n", kecepatan_motor[selected_level]);
        
        start_pump();
        printf("Membuka klep pembuangan air kotor selama 2 menit\n");
        
        printf("Motor listrik utama berhenti setiap pertengahan waktu\n");
        start_motor(0);
        

        start_pump();
        printf("Motor listrik klep pembuang air kotor aktif selama 2 menit \n");
        
        start_motor(kecepatan_motor[selected_level] * 2);
        printf("Motor listrik utama berputar dengan kecepatan 2000 rpm \nuntuk mengeringkan cucian selama 3 menit\n");
        
        printf("Motor listrik pembuka klep pengisian air aktif selama 2 menit\n");
        
    start_motor(kecepatan_motor[selected_level]);
        printf("Motor listrik utama berputar selama sisa waktu mencuci\n");
        
        start_pump();
        printf("Motor listrik klep pembuang air kotor aktif selama 2 menit \n");
        
 start_motor(kecepatan_motor[selected_level] * 2);
        printf("Motor listrik utama berputar dengan kecepatan 2000 rpm \nuntuk mengeringkan cucian selama 3 menit\n");

        printf("Cucian telah selesai dan kering.\n");
    } else {
        printf("Tidak ada level kekeruhan air yang sesuai. Mesin cuci tidak dapat diaktifkan.\n");
    }

    return 0;
}