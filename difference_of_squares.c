#include <stdio.h>
int difference_kare(){
    int sayi,toplam1 = 0, toplam_kare, toplam = 0,fark;
    printf("To stop enter number write 0\n");
    while(1){
        printf("Sayi girin:\n ");
        scanf("%d", &sayi);
        if(sayi == 0)
        {
            break;
        }
        toplam += sayi;
        toplam1 += sayi * sayi;
    }
    toplam_kare = toplam * toplam;
    printf("Sayilarin toplaminin karesi: %d\n", toplam_kare);
    printf("Sayilarin karelerinin toplami: %d\n", toplam1);
    fark = toplam_kare - toplam1;
    printf("Fark: %d\n", fark);
}
int main(){
    difference_kare();
    return 0;
}