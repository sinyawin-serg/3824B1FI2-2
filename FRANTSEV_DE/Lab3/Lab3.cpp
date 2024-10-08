#include <stdio.h>
#include <locale.h>
#include <stdlib.h>



int main()
{
    int mode;
    setlocale(LC_ALL, "rus");
    printf("Выберите задачу: ");
    scanf_s("%d", &mode);
    if (mode == 1) {
        system("cls");
        int a, b, ost = 28, c, d;
        printf("Введите два числа, у которых надо найти НОД: \n");
        scanf_s("%d %d", &a, &b);
        if (a > b) { c = a; d = b; }
        else { c = b; d = a; }
        while (ost != 0) {
            ost = c % d;
            c = d;
            d = ost;
        }
        printf("НОД равен %d", c);
    }
    else if (mode == 2) {
        system("cls");
        char c[2];
        int nado, summ = 0;
        printf("Введите число у которого надо найти сумму чисел: \n");
        scanf_s("%d", &nado);
        while (nado != 0) {
            summ += nado % 10;
            nado = nado / 10;
        }
        printf("\n\n%d\n\n", summ);
    }
    else if (mode == 3) {
        while (getchar() != '\n');
        system("cls");
        int nado, summ = 0, counter = 0, countercopy;
        printf("Введите искомую сумму чисел: \n");
        scanf_s("%d", &nado);
        while (counter < 999) {
            counter+= 1;
            summ = 0;
            countercopy = counter;
            while (countercopy != 0) {
                summ += countercopy % 10;
                countercopy = countercopy / 10;
            }
            if (summ == nado){
                printf("%d\n", counter);
            }
        }
    }
    else if (mode == 4) {
        while (getchar() != '\n');
        system("cls");
        printf("Введите длину слова: \n");
        int length, counter = -1, counter1 = 0, counterx2 = -1, bebra = 0, sovpadenia = 0;
        scanf_s("%d", &length);
        while (getchar() != '\n');
        char c[6], d[6];
        printf("Введите само слово:\n");
        fgets(c, length+1, stdin);
        while (getchar() != '\n');
        system("cls");
        while (sovpadenia != length) {
            sovpadenia = 0;
            printf("Попытайтесь угадать слово с количеством букв: %d\n", length);
            fgets(d, length + 1, stdin);
            while (getchar() != '\n');
                counter = -1;
                counter1 = 0;
            while (counter < length-1) {
                counter++;
                counterx2 = -1;
                counter1++;
                bebra = 0;
                if ((c[counter] == d[counter]) && (c[counter] != '\n')) { printf("%d - совпадение\n", counter1); sovpadenia += 1; bebra = 1; }
                else {
                    while (counterx2 < length-1) {
                        counterx2++;
                        if (d[counter] == c[counterx2]) { printf("%d - присутствие\n", counter1); bebra = 1; }
                    }
                }
                if (bebra == 0) printf("%d - отсутствие\n", counter1);
            }
        }
        printf("\nВы угадали!\n");
        }
    else printf("PIPISKA\n");
}

