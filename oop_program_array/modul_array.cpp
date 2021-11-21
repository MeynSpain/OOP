#include <iostream>
namespace kib
{

    int* Filling(int* mas, int di, int l) {  // Ввод массива
        for (int i = 0; i < l; i++)
            mas[i] = rand() % (di + 1);
        return mas;
    }

    void Output(int* mas, int l) {   // Вывод массива
        using std::cout;            // using-стейтменты
        using std::endl;
        for (int i = 0; i < l; i++)
            cout << "mas[" << i << "]=" << mas[i] << endl;
    }

    int Sum(int* mas, int l) {          // Вычисление суммы массива
        int s = mas[0];                // Начальное значение - 1-й элемент
        for (int i = 1; i < l; i++) 
            s += mas[i];               // Цикл вычисления 
        return s;
    }
}