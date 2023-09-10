#include <stdio.h>
 
int main()
{
  	float Centimeter, Meter, Kilometer;
 
 	printf("\n Masukkan angka dalam satuan km	:  ");
  	scanf("%f", &Kilometer);
  
  	Meter = Kilometer * 1000.0;
  	Centimeter = Kilometer * 100000.0; 	
  	
  	printf("\n==========================================");
  	printf("\n               Hasil Konversi");
  	printf("\n==========================================");

    printf("\n %.2f Kilometer	= %2.f Meter", Kilometer, Meter);
    printf("\n %.2f Meter	= %2.f Centimeter", Meter, Centimeter);
  
   	return 0;
}
