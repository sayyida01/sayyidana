#include <stdio.h>

int main(){
	printf("===================================\n");
	printf("=======DAFTAR MATA KULIAH==========\n");

chat matakuliah[2][50] = {"Algorithm", "Math Discrete"}; // Mendeklarasikan mata kuliah
int SKS[2] = {4, 6}; // mendeklarasikan nilai sks
char Grade[3] = {'A', 'A'}; // mendeklarasikan nilai
printf("Kode Mata Kuliah\tMata Kuliah\t\tSKS\tGRADE\n");
for (int i = 0; i < 2; i++) { 
printf("%s\t\t\t%s\t\t%d\t%c\t\n", Kode_Mata_Kuliah[i],Mata_Kuliah[i], SKS[i], Grade[i]);
}
printf("\n========== TERIMAKASIH ============\n");

return 0;
}
}
