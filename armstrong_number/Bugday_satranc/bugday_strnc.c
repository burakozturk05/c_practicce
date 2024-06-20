#include <stdio.h>

int main(){
    int kare, bt,tb;
    for(kare = 0; kare <= 64; kare++)
    {
        bt = (unsigned long) pow(2, kare - 1);
        tb += bt;
        printf("Kare %lu: %d bugday taneleri\n", kare,bt);
    }
    printf("Toplam satranc tahtasindaki bugday taneleri %lu\n", tb);

    return 0;
}