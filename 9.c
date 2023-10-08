#include <stdio.h>
// membuat struct
struct Mahasiswa {
char nrp[30];
char nama[20];
float ipk;
};
int main(){
// menggunakan struct
struct Mahasiswa mhs1;
// mengisi nilai ke struct
strcpy(mhs1.nrp, "162023001");
strcpy(mhs1.nama, "Anton");
mhs1.ipk = 3.2;
// mencetak data struct
printf("NRP: %s\n,mhs1.nrp");
printf("Nama: %s\n,mhs1.nama");
printf("IPK: %f\n,mhs1.ipk");

return 0;
}


