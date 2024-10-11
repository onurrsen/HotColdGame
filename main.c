#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sicaksoguk(int deger) {
int tahmin,yenifark,eskifark,sayi;
int deneme=1;
    srand(time(NULL));
    if(deger==1)
    {
    sayi=rand()%101;
    eskifark=100;
    }
    else if(deger==2)
    {
 eskifark=500;
 sayi=rand()%501;
    }
    else if(deger==3)
    {
eskifark=1000;
  sayi=rand()%1001;
    }

    do{
        printf("\nBir sayi tahmin edin: \n");
        scanf("%d",&tahmin);
        yenifark=abs(sayi-tahmin);
        if(tahmin==sayi)
        {
            printf("Tebrikler sayiyi buldunuz!\n");
            printf("\n%d Denemede Bulundu.\n",deneme);
            break;
        }
        if(yenifark>eskifark) {
            printf("Soguk..");
        } else {
        printf("Sicak!");
        }
        eskifark=yenifark;
        deneme=deneme+1;

    } while(sayi!=tahmin);
}

void anaEkran() {
int secim;

    do {
        printf("***Sicak Soguk Oyunu***");
        printf("\n\nLutfen zorluk seciniz: \n");
        printf("1.Kolay Seviye: 0-100\n");
        printf("2.Orta Seviye: 0-500\n");
        printf("3.Zor Seviye: 0-1000\n");
        printf("0. Cikis\n\n");
        scanf("%d",&secim);

switch(secim) {
case 1:
sicaksoguk(1);
break;
case 2:
sicaksoguk(2);
break;
case 3:
sicaksoguk(3);
break;
case 0:
break;
default:
    printf("Lutfen gecerli bir deger giriniz!\n");
break;
}} while(secim!=0);

printf("\nCikis yapildi...\n\n");

}

int main()
{
   anaEkran();
return 0;
}


