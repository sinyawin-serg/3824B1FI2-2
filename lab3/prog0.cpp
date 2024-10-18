#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main(){
    setlocale(LC_ALL,"Russian");
    srand(time(NULL));
    int n,r,h;
    printf("Введите сколько будет цифр в числе(от 2 до 5)\n");
    scanf_s("%d",&n);
    if (2<=n<=5){
        h = 10^(n - 1) + rand() % 10^n-1;
        printf("%d", h);

    }
    return 0;
}

