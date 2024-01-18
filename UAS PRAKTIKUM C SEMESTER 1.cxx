#include <stdio.h>
#include <unistd.h>

// Function to start the motor with a given speed
void start_motor(int speed) {
  // Code to set the motor speed goes here
  printf("Motor speed set to %d rpm\n", speed);
}

// Function to start the pump
void start_pump() {
  // Code to turn on the pump goes here
  printf("Pump turned on\n");
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
        // Start the motor with a low speed at the beginning of the wash cycle
        start_motor(kecepatan_motor[selected_level] / 2);
        
        printf("Motor listrik pembuka klep pengisian air aktif selama 2 menit\n");
        printf("Mengaktifkan motor listrik dengan kecepatan %d rpm...\n", kecepatan_motor[selected_level]);
        
        // Turn on the pump to drain the water
        start_pump();
        printf("Membuka klep pembuangan air kotor selama 2 menit\n");
        
        // Stop the motor briefly
        printf("Motor listrik utama berhenti setiap pertengahan waktu\n");
        start_motor(0);
        
        // Turn on the pump again to drain the water
        start_pump();
        printf("Motor listrik klep pembuang air kotor aktif selama 2 menit \n");
        
        // Start the motor with a high speed to dry the clothes
        start_motor(kecepatan_motor[selected_level] * 2);
        printf("Motor listrik utama berputar dengan kecepatan 2000 rpm \nuntuk mengeringkan cucian selama 3 menit\n");
        
        printf("Motor listrik pembuka klep pengisian air aktif selama 2 menit\n");
        
        // Start the motor with the selected speed to finish the wash cycle
        start_motor(kecepatan_motor[selected_level]);
        printf("Motor listrik utama berputar selama sisa waktu mencuci\n");
        
        // Turn off the pump
        start_pump();
        printf("Motor listrik klep pembuang air kotor aktif selama 2 menit \n");
        
        // Start the motor with a high speed to dry the clothes
        start_motor(kecepatan_motor[selected_level] * 2);
        printf("Motor listrik utama berputar dengan kecepatan 2000 rpm \nuntuk mengeringkan cucian selama 3 menit\n");

        printf("Cucian telah selesai dan kering.\n");
    } else {
        printf("Tidak ada level kekeruhan air yang sesuai. Mesin cuci tidak dapat diaktifkan.\n");
    }

    return 0;
}