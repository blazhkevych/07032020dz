/*
Домашнее задание № 10
Курс «Язык программирования C»
Встреча №20
Тема : Функции Домашнее задание
Задание 1 : Написать функцию, которая принимает два параметра : основание степени и показатель степени, и вычисляет степень числа на основе полученных данных.
#include <iostream>
#include <windows.h>
using namespace std;
const double degree_of_number(int a, int b)
{
	return pow(a, b);
}
int main()
{
	SetConsoleOutputCP(1251);
	int a = 2, b = 3;
	cout << a << " в " << b << " степени = " << degree_of_number(a, b) << endl;
}
*/
/*
Задание 2: Написать функцию, которая получает в качестве параметров 2 целых числа и возвращает сумму чисел из диапазона между ними.
#include <iostream>
#include <windows.h>
#include "CPP.h"
using namespace std;
int the_sum_of_numbers_from_the_range_between_numbers(int a, int b)
{
	int sum = 0;
	for (size_t i = a + 1; i < b; i++)
	{
		sum = sum + i;
	}
	return sum;
}
int main()
{
	SetConsoleOutputCP(1251);
	int a = 1, b = 5;
	cout << "Сумма чисел из диапазона между " << a << " и " << b << " = " << the_sum_of_numbers_from_the_range_between_numbers(a, b) << endl;
}
*/
/*
Задание 3: Число называется совершенным, если сумма всех его делителей равна ему самому.Напишите функцию поиска таких чисел во введенном интервале.
#include <iostream>
#include <windows.h>
using namespace std;
int digit(int x, int y)
{
	for (int i = x; i < y; i++)
	{
		int result = 0;
		for (int j = 1; j < i; j++)
		{
			if ((i % j) == 0)
			{
				result += j;
			}
		}
		if (result == i && result)
		{
			cout << result << " \n";
		}
	}
	return 0;
}
int main()
{
	SetConsoleOutputCP(1251);
	int q, w;
	cout << "Введите начало интервала: ";
	cin >> q;
	cout << "Введите конец интервала: ";
	cin >> w;
	digit(q, w);
}
*/
/*
Задание 4: Написать функцию, выводящую на экран переданную ей игральную карту.
#include<iostream>
#include<iomanip>
using namespace std;
void showCard(int _suit, int _num)
{
	int filler = 6;
	char upLeftCorner = 218, upRightCorner = 191, horizontalLine = 196, verticalLine = 179, downLeftCorner = 192, downRightCorner = 217;
	char charCard[13] = { 'A','2','3','4','5','6','7','8','9','0','J','Q','K' };
	_suit += 2;
	system("cls");
	cout << upLeftCorner << setfill(horizontalLine) << setw(8) << upRightCorner << endl;
	if (_num == 10)
	{
		filler--;
		cout << verticalLine << "1" << charCard[_num - 1] << (char)_suit << setfill(' ') << setw(filler) << verticalLine << endl;
	}
	else
		cout << verticalLine << charCard[_num - 1] << (char)_suit << setfill(' ') << setw(filler) << verticalLine << endl;
	cout << verticalLine << setw(8) << verticalLine << endl;
	cout << verticalLine << setw(8) << verticalLine << endl;
	cout << verticalLine << setw(8) << verticalLine << endl;
	cout << verticalLine << setw(8) << verticalLine << endl;
	cout << verticalLine << setw(8) << verticalLine << endl;
	cout << verticalLine << setw(8) << verticalLine << endl;
	if (_num == 10)
		cout << verticalLine << setfill(' ') << setw(filler) << "1" << charCard[_num - 1] << (char)_suit << verticalLine << endl;
	else
		cout << verticalLine << setfill(' ') << setw(filler) << charCard[_num - 1] << (char)_suit << verticalLine << endl;
	cout << downLeftCorner << setfill(horizontalLine) << setw(8) << downRightCorner << endl;
}
int main()
{
	int suit, num;
	while (1)
	{
		system("cls");
		cout << "Please enter suit\n1 - Hearts\n2 - Diamonds\n3 - Clubs\n4 - Spades" << endl;
		cin >> suit;
		if (suit < 1 || suit > 4)
		{
			cout << "ERROR: Incorrect suit\n";
			system("pause");
			exit(1);
		}
		system("cls");
		cout << "Enter card\n1 - Ace \n2 - Two\n3 - Three\n4 - Four\n5 - Five\n6 - Six\n7 - Seven\n8 - Eight\n9 - Nine\n10 - Ten\n11 - Jacket\n12 - Quin\n13 - King" << endl;
		cin >> num;
		if (num < 1 || num > 13)
		{
			cout << "ERROR: Incorrect card\n";
			system("pause");
			exit(2);
		}
		showCard(suit, num);
		system("pause");
	}
	return 0;
}
*/
/*
Задание 5: Написать функцию, которая определяет, является ли «счастливым» шестизначное число.
#include <iostream>
#include <windows.h>
using namespace std;
void lucky_number()
{
	int arr[6];
	for (size_t i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}
	if (arr[0] + arr[1] + arr[2] == arr[3] + arr[4] + arr[5])
		cout << "Число счастливое";
	else cout << "Число не счастливое";
}
int main()
{
	SetConsoleOutputCP(1251);
	cout << "Введите шестизначное число(1 число -> Enter, 2 число -> Enter и т.д.):\n";
	lucky_number();
}
*/

