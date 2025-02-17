#include <stdio.h>
#include <math.h>

int main()
{

    int bakiye, guncelbak, yatir, cek;
    char a;

    bakiye = 5000;

    printf("Your bank account is %d $.\n", bakiye);
    printf("Please choose a action to perform\n");
    printf("For deposit 'y'\n for withdraw 'c':");

    scanf(" %c", &a);

    switch (a)
    {
    case 'y':
        printf("How much you want to deposit?:");
        scanf("%d", &yatir);

        guncelbak = bakiye + yatir;
        printf("New balance is %d $", guncelbak);
        break;
    case 'c':
        printf("How much you want to withdraw:");
        scanf("%d", &cek);

        guncelbak = bakiye - cek;
        printf("New balance is %d $", guncelbak);
        break;
    default:
        printf("Invaild action!");
        break;
    }
    return 0;
}