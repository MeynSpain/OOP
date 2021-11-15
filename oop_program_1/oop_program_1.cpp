﻿#include <iostream>
#define _USE_MATH_DEFINES    // Подключение математических констант
#include <math.h>

int main() {
    const double g = 9.80665;       // Ускорение свободного падения
    float l;                        // Длина маятника
    using namespace std;                   // Включение пространства имён

    setlocale(LC_ALL, "Russian");          // Включение русского языка
    cout << "Введите длину маятника: ";  // Ввод длины маятника
    cin >> l;
    if (l <= 0)                                 // Если длина нулевая или отрицательная,
        cout << "Данные неверны" << endl;       // То выводится сообщение об ошибке
    else {
        double T = 2 * M_PI * sqrt(l / g);                      // Вычисление периода
        cout << "Период колебания маятника: " << T << endl;    // Вывод периода
    }
    system("pause");  // Зафиксировать консоль
    return 0;
}
// Вычислить период колебания маятника длины L.
// Кибирев Михаил ВМК-20(1)