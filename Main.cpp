#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main() {
	setlocale(LC_ALL, "russian");
	int n,m;
	//Задача 1. Сортировка первых N элементов
	
	std::cout << "Задача 1. Изначальный массив: \n";
	const int size1 = 10;
	int arr1[size1];
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % (20 + 1 - 10) + 10;
		std::cout << arr1[i] << ' ';
	}
	std::cout << std::endl; //Перенос курсора на следующую строку в консоли и очищение буфера потока вывода.

	std::cout << "введите количество элементов для сортировки -> ";
	std::cin >> n;

	//Соритровка пузырьковым методом
	//for (int i = n - 1; i > 0; i--)
		//for (int j = 0; j < i; j++)
			//if (arr1[j] > arr1[j + 1])
				//std::swap(arr1[j], arr1[j + 1]);

	//Быстрая сортировка
	std::sort(arr1, arr1 + n);

	std::cout << "Итоговый массив: ";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << "\n\n";
	

	//Задача 2. Температура в январе
	std::cout << "Задача 2. Массив: \n";
	const int size2 = 31;
	int arr2[size2];
	srand(time(NULL));
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % (-5 + 1 - (- 30)) + (- 30);
		std::cout << arr2[i] << ' ';
	}
	std::cout << "\n\n";

	std::cout << "Введите число -> ";
	std::cin >> n;
	int counter = 0;
	int sum = 0;
	for (int i = 0; i < size2; i++) {
		sum += arr2[i];
		if (arr2[i] < n)
			counter++;
	}
	 
	std::cout << "Среднее арифметическое = " << (double)sum / size2 << std::endl;
	std::cout << "Количествое чисел следующих условию = " << counter << "\n\n";

	//Задача 3.Вхождение в диапазон
	std::cout << "Задача 3.\nВведите начало диапазона -> ";
	std::cin >> n;
	std::cout << "Введите конец диапазона -> ";
	std::cin >> m;
	const int size3 = 20;
	int arr3[size3];
	srand(time(NULL));
	for (int i = 0; i < size3; i++) {
		arr3[i] = rand() % (100 - 0) + 0;
		std::cout << i << ". " << arr3[i] << (arr3[i] >= n && arr3[i] <= m ? '!' : ' ') << std::endl;


	}

	//Задача 4. #будет позже!

	return 0;
}