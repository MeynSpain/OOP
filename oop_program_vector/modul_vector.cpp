#include <iostream>
#include <vector>
#include <fstream>

using namespace std;		// Стандартное пространство имён
using arr = vector<int>;	// Упрощение vector<int> до arr

namespace kib {									// Собственное пространство имён
	void random_vec(arr& a, int l, int r) {		// Процедура заполнения вектора
		for (int i = 0; i < l; i++)				// Заполнить массив...
			a.push_back(rand() % (r + 1));		// Случайными чисел
	}

	void output_screen(arr& a) {				// Процедура вывода на экран
		for (unsigned i = 0; i < a.size(); i++)		// Вывести вектор в строчку
			cout << a[i] << " ";
		cout << endl;
	}

	int sum(arr& a, int l) {			// Функция суммирования
		int s = a[0];					// К начальному значению суммы...
		for (int i = 1; i < l; i++)		// ...прибавлять другие элементы
			s += a[i];
		return s;
	}

	void output_file(arr& a, string f) {				// Процедура вывода в файл
		ofstream f_out(f, ios::binary);					// Создание объекта класса ofstream
		for (unsigned i = 0; i < a.size(); i++)				// До конца вектора...
			f_out.write((char*)&a[i], sizeof(int));		// ...вывести в файл
		f_out.close();									// Закрыть файл
	}

	void input_file(arr& a, string f) {		// Процедура вывода из файла
		ifstream f_in(f, ios::binary);		// Создание объекта класса ifstream
		f_in.seekg(0, ios::end);			// Перемещение указателя в конец
		streamoff f_size = f_in.tellg();			// Определение размера файла
		f_in.seekg(0);						// Возвращение указателя на начало
		int n;
		for (streamoff i = 0; i < f_size / sizeof(int); i++) {	// От начала до конца...
			f_in.read((char*)&n, sizeof(int));				// ...прочитать и...
			a.push_back(n);									// ...вывести в вектор
		}
		f_in.close();		// Закрыть файл
	}
}