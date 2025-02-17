#include <stdio.h>
#include <math.h>

int main()
{

    int bakiye, guncelbak, yatir, cek;
    char a;

    bakiye = 5000;

    printf("Hesabinizda %d TL bulunuyor.\n", bakiye);
    printf("Hangi islemi yapmak istersiniz\n");
    printf("yatirmak icin 'y' veya cekmek icin 'c' yaziniz:");

    scanf(" %c", &a);

    switch (a)
    {
    case 'y':
        printf("Ne kadar yatirmak istersiniz:");
        scanf("%d", &yatir);

        guncelbak = bakiye + yatir;
        printf("Guncel bakiyen %d", guncelbak);
        break;
    case 'c':
        printf("Ne kadar cekmek istersiniz:");
        scanf("%d", &cek);

        guncelbak = bakiye - cek;
        printf("Guncel bakiyen %d", guncelbak);
        break;
    default:
        printf("Lütfen geçerli bir dişlem girin!");
        break;
    }
    return 0;
}