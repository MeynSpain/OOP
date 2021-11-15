#include <iostream>
#include "Header.h" // Подключение собственного модуля

int main() {
    using std::cout; // using-стейтменты для элементов вывода
    using std::cin;
    using std::endl;
    setlocale(LC_ALL, "Russian");       // Русский язык в консоли
    
    cout << "Введите длину массива: ";  // Ввод длины массива
    int l;
    cin >> l;
    if (l <= 0)                              // Если длина меньше единицы,
        cout << "Данные неверны" << endl;    // Выводится сообщение об ошибке
    else {
        cout << "Введите диапазон значений: ";   // Ввод диапазона значений
        int di;
        cin >> di;
        int* mas = new int[l];   // Выделение памяти для массива
        Kib::Filling(mas, di, l);     // Заполнение массива
        Kib::Output(mas, di, l);      // Вывод массива на экран
    }
    delete mas;
    system("pause"); // Зафиксировать консоль
    return 0;
}
// Создать динамический массив и вывести его на экран
// Кибирев Михаил ВМК-20(1)
