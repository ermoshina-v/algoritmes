// Console2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    float R;
    float x;
    float y;
    printf_s("Введите R = ");
    scanf_s("%f", &R);
    printf_s("Введите x = ");
    scanf_s("%f", &x);
    printf_s("Введите y = ");
    scanf_s("%f", &y);
    if ((y >= 0 && x * x + y * y <= R * R) || (y <= x && y >= -R && x <= 0))
    {
        printf_s("Попадает");
    }
    else printf_s("Не попадает");
}

/* int z1()
{
    float R;
    float x;
    float y;
    printf_s("Введите R = ");
    if (x >= -10 and x < 0) y = -x;
    else
        if (x >= 0 and x < 3) y = -R;
        else
            if (x >= 3 and x < 6) y = R;
            else y = 0;
    printf_s("Значение функции = ", y);
} */

