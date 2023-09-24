#include <stdio.h>
#include <string.h>

int main(){
	char nama1[20];
	char *nama2;
	char *nama3[20];
	
strcpy(nama1, "Brisia Jodie"); //input data string ke dalam nama1
nama2 = "Brisia Jodie"; // input alamat memori 
nama3[0]="Brisia Jodie"; // input alamat memori string

printf("nama1: %s\n", nama1);
printf("nama2: %s\n", nama2);
printf("nama3[0]:%s\n", nama3[0]);

return 0;

}
