#include <iostream>
#include <stdio.h>
#include <Windows.h>

#define NALOG       0.15
#define PROCENT     0.28
#define STAVKA1     17850
#define STAVKA2     23900
#define STAVKA3     29750
#define STAVKA4     14875

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double dohod;
    double sum = 0;
    int x = 1;

    while (1)
    {
        if (x == 5)
            break;
        printf("Введите категорию налога:\n1) Одинокий\n2) Глава семейства\n3) Состоит в браке, совместное\
 ведение хозяйства\n4) Состоит в браке, раздельное ведение хозяйства\n5) Выход\n");
        scanf_s("%d", &x);

        switch (x)
        {
        case 1:
            printf("Введите облагаемый налогом доход.\n");
            scanf_s("%lf", &dohod);

            sum = NALOG * STAVKA1 + PROCENT * (dohod - STAVKA1);

            printf("За $%.lf дохода cумма налога составит $%1.2f\n", dohod, sum);
            break;
        case 2:
            printf("Введите количество часов работы.\n");
            scanf_s("%lf", &dohod);

            sum = NALOG * STAVKA2 + PROCENT * (dohod - STAVKA2);

            printf("За $%.lf дохода cумма налога составит $%1.2f\n", dohod, sum);
            break;
        case 3:
            printf("Введите количество часов работы.\n");
            scanf_s("%lf", &dohod);

            sum = NALOG * STAVKA3 + PROCENT * (dohod - STAVKA3);

            printf("За $%.lf дохода cумма налога составит $%1.2f\n", dohod, sum);
            break;
        case 4:
            printf("Введите количество часов работы.\n");
            scanf_s("%lf", &dohod);

            sum = NALOG * STAVKA4 + PROCENT * (dohod - STAVKA4);

            printf("За $%.lf дохода работы cумма налога составит $%1.2f\n", dohod, sum);
            break;
        case 5:
            break;
        default:
            printf("Вы ввели неверные данные. Доступно 1-5\n");
        }
    }
    
    return 0;
}

