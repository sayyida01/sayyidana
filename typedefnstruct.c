#include <stdio.h>
// Definisikan tipe data bentukan mahasiswa
typedef struct {
char *nim;
char *nama;
float ipk;
} Mahasiswa; // Tipe data bentukan
int main(){
Mahasiswa m1; // Tidak perlu struct
// mengisi m1
strcpy(m1.nim, "279634509");
strcpy(mhs1.nama, "Yelena");
m1.ipk = 3.2;
// mencetak data struct
printf("NIM: %s\n,mhs1.nrp");
printf("Nama: %s\n,mhs1.nama");
printf("IPK: %f\n,mhs1.ipk");
return 0;
}

