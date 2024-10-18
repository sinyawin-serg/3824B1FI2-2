#include <stdio.h>
#include <locale.h>
int main() {
    setlocale (LC_ALL,"Russian");
    printf("Загадайте число от 1 до 1000\n");
    int x,y = 500,a1 = 0,a2 = 500,a3 = 1001;
    char k;
    printf("Ваше число %d?\n",y);
    printf("Число больше,меньше,равно\n");
    scanf_s("%с",&k);
    k = getchar();
    while (k != '='){
        if(k == '<'){
            x = (a1 + a2) / 2;
            y = x;
            a3 = a2;
            a2 = y;
        }
        else if (k == '>'){
            x = (a2 + a3) / 2;
            y = x;
            a1 = a2;
            a2 = y;
        }
        printf("Ваше число %d?\n",y);
    printf("Число больше,меньше,равно\n");
    scanf_s("%с",&k);
    k = getchar();
    }
    printf("угадал\n");
    return 0;

    }
