#include <iostream>
#include <vector>				// Подключение векторов
#include <time.h>				// Подключение случайности
#include "header_vector.h"		// Подключение модуля

int main() {
	using namespace std;		// Стандартное пространство имён
	using namespace kib;		// Собственное пространство имён
	setlocale(0, "");			// Русская локализация
	srand(unsigned(time(0)));	// Псевдослучайность

	vector<int> array;		// Объявление вектора
	
	int lnt, rng;

	try {
		cout << "Длина массива: ";						// Обращение к пользователю
		cin >> lnt;										// Ввод длины вектора
		if (lnt <= 0)									// Если длина не положительна
			throw exception("Длина не положительна");	// Выбрасывание ошибки

		cout << "Диапазон значений: ";					// Обращение к пользователю
		cin >> rng;										// Ввод диапазона значений
		if (rng <= 0)									// Если диапазон не положителен
			throw exception("Диапазон не положителен");	// Выбрасывание ошибки
	}
	catch (const std::exception& x) {					// Обработка исключения
		cout << "Ошибка: " << x.what() << endl;			// Ошибка: *вывод ошибки*
		system("pause");								// Зафиксировать консоль
		return 0;										// Завершить программу
	}

	random_vec(array, lnt, rng);	// Процедура заполнения вектора
	output_screen(array);			// Процедура вывода на экран

	cout << "Сумма элементов: " << sum(array, lnt) << endl;		// Функция суммирования

	const string f_name = "data.dat";	// Переменная названия файла
	output_file(array, f_name);			// Процедура вывода в файл
	array.clear();						// Очистка вектора
	input_file(array, f_name);			// Процедура вывода из файла
	output_screen(array);				// Процедура вывода на экран

	system("pause");	// Зафиксировать консоль
	return 0;
}