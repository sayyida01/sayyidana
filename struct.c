#include <stdio.h>
// membuat struct
struct Mahasiswa {
char *nim;
char *nama;
float ipk;
};
int main(){
// menggunakan struct
struct Mahasiswa m1;
// mengisi nilai ke struct
strcpy(m1.nim, "162023001");
strcpy(m1.nama, "Yelena");
mhs1.ipk = 3.2;
// mencetak data struct
printf("NIM: %s\n,m1.nim);
printf("Nama: %s\n,m1.nama);
printf("IPK: %f\n,m1.ipk);

return 0;
}
