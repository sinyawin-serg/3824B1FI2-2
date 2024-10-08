// Первый режим
/*
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

void main() {
	setlocale(LC_ALL, "rus");
	int cm, pl, n{};
	srand(time(NULL));
	cm = 1 + rand() % 1001;
	printf("Программа загадала число от 1 до 1000. Попробуйте угадать число!\n");
	scanf_s("%d", &pl);
	if (pl == cm) {
		printf("Ура! Вы угадали с первого раза!\n");
		printf("Число ваших попыток: %d\n", n = 1);
	}
	else {
		while (pl != cm) {
			printf("Попробуйте ещё!\n");
			scanf_s("%d", &pl);
			n = n + 1;
			if (pl < cm)
				printf("Загаданное число больше, чем ваше\n");
			else if (pl > cm)
				printf("Загаданное число меньше, чем ваше\n");
			else
				printf("Вы угадали!\n");
		}
	}
	printf("Число ваших попыток: %d\n", n+1);
}
*/

// Второй режим

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

void main() {
	setlocale(LC_ALL, "rus");
	int pl, cm, n = 1, p;
	char z;
	printf("Загадайте число от 1 до 1000.\n");
	scanf_s("%d", &pl);
	srand(time(NULL));
	cm = 1 + rand() % 1001;
	printf("%d\n", cm);

	while (cm != pl) {
		printf("Введите знак: \n");
		scanf_s(" %c", &z);
		n = n + 1;
		if (z == '>') {
			p = cm;
			cm = p + 1 + rand() % 1001;
			printf("%d\n", cm);
		}
		else if (z == '<') {
			p = cm;
			cm = 1 + rand() % p;
			printf("%d\n", cm);
		}
		else if (z == '=') {
			printf("Ура! Выше число: %d\n", cm);
			break;
		}
	}
	printf("Число ваших попыток: %d\n",n);
	
}
