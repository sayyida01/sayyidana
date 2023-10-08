#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// Menentukan struct
struct Contact {
    char nama[50];
    char nohp[15];
    char alamat[15];
    char email[50];
    char perusahaan[50];
};

// Menambahkan kontak
struct Contact* addContact() {
    struct Contact* newContact = (struct Contact*)malloc(sizeof(struct Contact));
    if (newContact == NULL) {
        printf("Alokasi memori gagal\n");
        exit(1);
    }
    printf("Masukkan detail kontak:\n");
    printf("Nama			: ");
    scanf("%s", newContact->nama);
    printf("No. Handphone	: ");
    scanf("%s", newContact->nohp);
    printf("Alamat			: ");
    scanf("%s", newContact->alamat);
    printf("Email			: ");
    scanf("%s", newContact->email);
    printf("Perusahaan		: ");
    scanf("%s", newContact->perusahaan);

    return newContact;
}

// Menampilkan kontak
void displayContact(struct Contact* contact) {
    printf("Nama			: %s\n", contact->nama);
    printf("No. Handphone	: %s\n", contact->nohp);
    printf("Alamat			: %s\n", contact->alamat);
    printf("Email			: %s\n", contact->email);
    printf("Perusahaan		: %s\n", contact->perusahaan);
}

// Menghapus kontak
void deleteContact(struct Contact* contact) {
    free(contact);
    printf("Kontak telah dihapus.\n");
}

int main() {
    int choice;
    struct Contact* myContacts = NULL;

    while (1) {
    	printf("=================================================\n");
	    printf("==================MANAJEMEN KONTAK===============\n");
        printf("=================================================\n");
        printf("\nMenu : \n");
        printf("1. Tambahkan Kontak Baru\n");
        printf("2. Menampilkan Kontak Tersimpan\n");
        printf("3. Hapus Kontak\n");
        printf("4. Keluar\n");
        printf("Ketik dalam angka menu pilihan anda: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (myContacts == NULL) {
                    myContacts = addContact();
                } else {
                    printf("Kontak sudah tersedia. Tolong hapus kontak yang sudah ada.\n");
                }
                break;
            case 2:
                if (myContacts != NULL) {
                    displayContact(myContacts);
                } else {
                    printf("Tidak ada kontak untuk ditampilkan\n");
                }
                break;
            case 3:
                if (myContacts != NULL) {
                    deleteContact(myContacts);
                    myContacts = NULL;
                } else {
                    printf("Kontak tidak tersedia\n");
                }
                break;
            case 4:
                if (myContacts != NULL) {
                    free(myContacts); // Menghapus memori sebelum keluar
                }
                exit(0);
            default:
                printf("Harap memasukkan data yang sesuai.\n");
        }
    }

    return 0;
}

