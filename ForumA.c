#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int NIM,tugas,UTS,UAS,total;
    char nm[20];
   
    printf("Silahkan masukkan NIM		: ");
    scanf("%d",&NIM);
    printf("Silahkan masukkan nama 		: ");
    scanf("%s",nm);
    return 0;}
    printf("Silahkan masukkan nilai tugas	: ");
    scanf("%d",&tugas);
    if(tugas<0 || tugas>100) {printf("masukkan nilai dalam range 0-100!");
     return '\0';}
    printf("Silahkan masukkan nilai UTS	: ");
    scanf("%d",&UTS);
    if(UTS<0 || UTS>100) {printf("masukkan nilai dalam range 0-100!");
     return '\0';}
    printf("Silahkan masukkan nilai UAS	: ");
    scanf("%d",&UAS);
     if(UAS<0 || UAS>100) {printf("masukkan nilai dalam range 0-100!");
     return '\0';}
     
    total = tugas*0.4+UTS*0.3+UAS*0.3;

    printf("=================================") ;  
       printf("\nNIM		: %d\nNama		: %s\n",NIM,nm);
       printf("Nilai Akhir	: %d",total);
       printf("\nGrade		: ");
        if(total>=90 && total<=100)
        printf("A");
    else if(total>=85 && total<90)
        printf("A-");
    else if(total>=80 && total<85)
        printf("B+");
    else if(total>=75 && total<80)
        printf("B");
    else if(total>=70 && total<75)
        printf("B-");
    else if(total>=65 && total<70)
        printf("C");
    else if(total>=50 && total<65)
        printf("D");
    else if(total<50)
        printf("E");
return 0;
}

