#include <stdio.h>
#include <errno.h>

#define MAX_LINE 200  // Mendefinisikan ukuran maksimal setiap baris yang dibaca

int main() {
    // Mencoba membuka file "data.txt" untuk pembacaan
    FILE *file = fopen("data.txt", "r");
    
    // Buffer untuk menyimpan konten dari setiap baris yang dibaca dari file
    char line[MAX_LINE];

    // Cek jika file tidak bisa dibuka, dan tampilkan pesan error jika demikian
    if (!file) {
        printf("Error saat membuka file: %s\n", strerror(errno));
        return 1;
    }

    // Menampilkan header untuk output
    printf("Data dalam file:\n");
    printf("---------------------------------------------------------\n");

    // Membaca file baris per baris
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);  // Menampilkan baris yang baru saja dibaca
    }

    // Menampilkan footer untuk output
    printf("---------------------------------------------------------\n");

    fclose(file);  // Menutup file setelah selesai membaca
    return 0;
}

