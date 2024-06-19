#include <stdio.h>
#include <math.h>
int top_kar(){
    int sayi, toplam;
    printf("To stop enter number write 0\n");
    while(1){
        printf("Sayi girin:\n ");
        scanf("%d", &sayi);
        if(sayi == 0)
        {
            break;
        }
        toplam += sayi;
    }

    printf("%lf", pow(toplam,2));
}
int sayi_kare(){
    int sayi, toplam;
    printf("To stop enter number write 0\n");
    while(1){
        printf("Sayi girin:\n ");
        scanf("%d", &sayi);
        if(sayi == 0)
        {
            break;
        }
        toplam += pow(sayi,2);

    }
    printf("%lf", pow(toplam,2));
}

int main(){
    int secenek;
    printf(".once sayilari toplayip sonra kare alacaksaniz 1 yazin ardindan sayilari girin,eger tersiyse 2 yazip sayilari girin.\n");
    printf("Default 1..\n");
    scanf("%d", &secenek);
    if(secenek == 1)
    {
        top_kar();
    }else
    {
        sayi_kare();
    }
    return 0;
}