#pragma once

using namespace std;		// Стандартное пространство имён
using arr = vector<int>;	// Упрощение vector<int> до arr
namespace kib {				// Собственное пространство имён

	void random_vec(arr& a, int l, int r);		// Процедура заполнения массива
	void output_screen(arr& a);					// Процедура вывода на экран
	int sum(arr& a, int l);						// Функция суммирования
	void output_file(arr& a, string f);			// Процедура вывода в файл
	void input_file(arr& a, string f);			// Процедура вывода из файла
}