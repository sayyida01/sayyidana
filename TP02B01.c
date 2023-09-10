#include<stdio.h>
#include<conio.h>
int main()
{
    float total, beli, discount, discount2, totalBayar, totalBayar2;
    printf("Pembelian ke?		: ");
    scanf("%f", &beli);
    printf("Total belanja		: ");
    scanf("%f", &total);
    
    printf("\n");
    if(total<=200000, beli < 4)
        printf("Diskon			: 0%% \nTotal Pembayaran	: %0.2f", total);
        else if(total<=200000 && beli > 4)
        {
		  discount = (total*20)/100;
		  totalBayar = total-discount;
          printf("Diskon			: 20%% \nTotal Pembayaran	: %0.2f", totalBayar);
        }
        else if(total>200000 && total<=500000 && beli > 4)
        {
            discount = (total*10)/100;
            totalBayar = total-discount;
            discount2 = (totalBayar*10)/100;
            totalBayar2 = totalBayar-discount2;
            printf("Diskon			: 10%% + 20%% \nTotal Pembayaran	: %0.2f", totalBayar2);
        }
        else if(total>200000 && total<=500000, beli < 4)
        {
             discount = (total*10)/100;
            totalBayar = total-discount;
            printf("Diskon			: 10%% \nTotal Pembayaran	: %0.2f", totalBayar);
        }
        else if(total>550000 && total<=1000000, beli < 4)
        {
            discount = (total*20)/100;
            totalBayar = total-discount;
            printf("Diskon			: 20%% \nTotal Pembayaran	: %0.2f", totalBayar);
        }
        else if(total>550000 && total<=1000000 && beli > 4)
        {
            discount = (total*20)/100;
            totalBayar = total-discount;
            discount2 = (totalBayar*20)/100;
            totalBayar2 = totalBayar-discount2;
            printf("Diskon			: 20%% + 20%% \nTotal Pembayaran	: %0.2f", totalBayar2);
        }
        else if(total>1000000, beli <4)
        {
            discount = (total*30)/100;
            totalBayar = total-discount;
            printf("Diskon			: 30%% \nTotal Pembayaran	: %0.2f", totalBayar);
        }
        else if(total>1000000 && beli > 4)
        {
            discount = (total*30)/100;
            totalBayar = total-discount;
            discount2 = (totalBayar*20)/100;
            totalBayar2 = totalBayar-discount2;
            printf("Diskon			: 30%% + 20%% \nTotal Pembayaran	: %0.2f", totalBayar2);
        }
    getch();
    return 0;
}
