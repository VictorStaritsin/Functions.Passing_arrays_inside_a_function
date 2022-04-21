////////////////
// ЗАДАНИЕ № 1//
////////////////

///*
//Задание 1. Написать функцию, которая принимает две даты
//(т.е. функция принимает шесть параметров) и вычисляет
//разность в днях между этими датами. Для решения этой
//задачи необходимо также написать функцию, которая
//определяет, является ли год високосным.
//*/
//#include <iostream>
//using namespace std;
//#define TAB '\t'
//// вывод даты в корректном формате
//void typeDate(int d, int m, int y) {
//	cout << d;
//	switch (m) {
//	case 0:
//		cout << " января ";
//		break;
//	case 1:
//		cout << " февраля ";
//		break;
//	case 2:
//		cout << " марта ";
//		break;
//	case 3:
//		cout << " апреля ";
//		break;
//	case 4:
//		cout << " мая ";
//		break;
//	case 5:
//		cout << " июня ";
//		break;
//	case 6:
//		cout << " июля ";
//		break;
//	case 7:
//		cout << " августа ";
//		break;
//	case 8:
//		cout << " сентября ";
//		break;
//	case 9:
//		cout << " октября ";
//		break;
//	case 10:
//		cout << " ноября ";
//		break;
//	case 11:
//		cout << " декабря ";
//		break;
//	}
//	cout << y << " года\n" << endl;
//}
//// проверка года на високосность
//bool isLeapYear(int y) {
//	if (y % 100 == 0 && y % 400 != 0 || y == 0)
//		return 0;
//	if (y % 4 == 0 || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//long long int calculateDaysBetweenDates(int d1, int m1, int y1, int d2, int m2, int y2) {
//	const int months = 12;
//	int year[months] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//	long long int value1 = 0, value2 = 0;
//
//	// Преобразование лет в дни
//	for (int i = 0; i < y1; ++i) {
//		(isLeapYear(i)) ? year[1] = 29 : year[1] = 28;
//		for (int j = 0; j < months; ++j)
//			value1 += year[j];
//	}
//
//	// Преобразование месяцев в дни
//	for (int i = 0; i < m1; ++i) {
//		(isLeapYear(y1)) ? year[1] = 29 : year[1] = 28;
//		value1 += year[i];
//	}
//
//	// добавление остаточных дней
//	value1 += d1;
//
//	// Преобразование лет в дни
//	for (int i = 0; i < y2; ++i) {
//		(isLeapYear(i)) ? year[1] = 29 : year[1] = 28;
//		for (int j = 0; j < months; ++j)
//			value2 += year[j];
//	}
//
//	// Преобразование месяцев в дни
//	for (int i = 0; i < m2; ++i) {
//		(isLeapYear(y2)) ? year[1] = 29 : year[1] = 28;
//		value2 += year[i];
//	}
//
//	// добавление остаточных дней
//	value2 += d2;
//
//	return ((value1 > value2) ? value1 - value2 : value2 - value1);
//}
//
//void main() {
//	setlocale(0, "");
//
//	cout << "Введите первую дату:" << endl;
//	int d1 = (cout << "Введите день -> ", cin >> d1, d1);
//	int m1 = (cout << "Введите месяц -> ", cin >> m1, m1);
//	int y1 = (cout << "Введите год -> ", cin >> y1, y1);
//	cout << endl;
//
//	// декрементация переменной связанной с месяцами из-за удобства пользовательского ввода
//	typeDate(d1, --m1, y1);
//
//	cout << "Введите вторую дату:" << endl;
//	int d2 = (cout << "Введите день -> ", cin >> d2, d2);
//	int m2 = (cout << "Введите месяц -> ", cin >> m2, m2);
//	int y2 = (cout << "Введите год -> ", cin >> y2, y2);
//	cout << endl;
//
//	typeDate(d2, --m2, y2);
//
//	cout << "Дней между датами: " << calculateDaysBetweenDates(d1, m1, y1, d2, m2, y2) << endl;
//}

////////////////
// ЗАДАНИЕ № 2//
////////////////

///*
//Написать функцию, определяющую среднее
//арифметическое элементов передаваемого ей массива.
//*/
//
//#include <iostream>
//
//using namespace std;
//
//void printArr(int arr[], int dimention);
//float averageArr(int arr[], int dimention);
//
//int main()
//{
//    setlocale(0, "");
//    int massiv[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//    int arDimention = sizeof(massiv) / sizeof(int);
//    cout << "Программа ищет среднее арифметическое массива чисел" << endl;
//    printArr(massiv, arDimention);
//    cout << "Среднее значение = " << averageArr(massiv, arDimention) << endl;
//    return 0;
//}
//
//void printArr(int arr[], int dimention)
//{
//    cout << "Мой массив: ";
//    for (int i = 0; i < dimention; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//float averageArr(int arr[], int dimention)
//{
//    float average = 0;
//    for (int i = 0; i < dimention; i++)
//    {
//        average += arr[i];
//    }
//    average /= dimention;
//    return average;
//}

////////////////
// ЗАДАНИЕ № 3//
////////////////

/*
Написать функцию, определяющую количество положительных,
отрицательных и нулевых элементов передаваемого ей массива.
*/

#include <iostream>

using namespace std;

void printArr(int arr[], int dimention);
void calculatingMassiv(int arr[], int dimention);

int main()
{
    setlocale(0, "");
    int massiv[] = { 1, -2, 3, -4, 0, 0, -7, 8, -9 };
    int arDimention = sizeof(massiv) / sizeof(int);
    cout << "Прграмма ищет числа" << endl <<
        "положительные, отрицательные и нули " << endl;
    //выводим на экран исходный массив
    printArr(massiv, arDimention);
    //вызываем функцию подсчета +/-/0 элементов
    calculatingMassiv(massiv, arDimention);
    return 0;
}

void printArr(int arr[], int dimention)
{
    cout << "Мой массив: ";
    for (int i = 0; i < dimention; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void calculatingMassiv(int arr[], int dimention)
{
    int plus = 0;
    int minus = 0;
    int zero = 0;

    for (int i = 0; i < dimention; i++)
    {
        if (arr[i] > 0)
        {
            plus++;
        }
        else if (arr[i] < 0)
        {
            minus++;
        }
        else
        {
            zero++;
        }
    }
    cout << "Количество положительных элементов = " << plus << endl <<
        "Количество отрицательных элементов = " << minus << endl <<
        "Число нулевых элементов = " << zero << endl;
}