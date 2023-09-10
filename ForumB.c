#include <stdio.h>
#include <string.h>

int main()
 {
	float liter, jarak, bensin_terpakai, sisa_bensin ; 
	int bensin, mode ;
	
	if(bensin == 1 && mode ==3) bensin_terpakai = jarak / 15;
	if(bensin == 1 && mode ==3){bensin_terpakai == jarak / 15;}
	else if(bensin == 1 && mode ==4){bensin_terpakai == jarak / 10;}
	else if(bensin == 2 && mode ==3){bensin_terpakai == jarak / 12;}
	else if(bensin == 2 && mode ==4){bensin_terpakai == jarak / 8;}
	
	printf("Masukkan volume bensin awal			: ");
	scanf("%f",&liter); 
	printf("Ketik 1 jika jenis Pertamax \nKetik 2 jika jenis Pertalite			: ");
	scanf("%d", &bensin); 
	if (bensin > 2) {printf("\nSilahkan ketik angka 1 atau 2");
	return 0;}
	printf("Masukkan jarak tempuh mobil : ");
	scanf("%f", &jarak);
	printf("Ketik 3 untuk mode konstan \nKetik 4 untuk mode stop_go : ");
	scanf("%d", &mode);
	if (mode>4) {printf("\nSilahkan ketik angka 3 atau 4");
	return 0;}
	
	
	if(bensin == 1 && mode ==3) bensin_terpakai = jarak / 15;
	else if(bensin == 1 && mode ==4)bensin_terpakai == jarak / 10;
	else if(bensin == 2 && mode ==3)bensin_terpakai == jarak / 12;
	else if(bensin == 2 && mode ==4)bensin_terpakai == jarak / 8;
	sisa_bensin = liter - bensin_terpakai;
	
	printf("\n=======================================================");
	printf("\nMENGHITUNG JUMLAH BENSIN TERPAKAI DAN SISA BENSIN");
	printf("\n=======================================================");
	
	printf("\nPenggunaan bensin yang terpakai : %.2f untuk menempuh jarak %.2f km", bensin_terpakai, jarak);
	printf("\nSisa bensin sekarang : %.2f", sisa_bensin);

	return 0;	
}


