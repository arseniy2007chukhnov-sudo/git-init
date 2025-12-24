#include <iostream>
#include <locale.h>
using namespace std;

int main(void)
{
	setlocale(LC_ALL, "Russian");
	int money[12];
	for (int i = 0; i < 12; i++)
		cin >> money[i];

	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	int sum4 = 0;
	int sum5 = 0;

	for (int i = 0; i < 4; i++)
		sum1 += money[i];

	for (int i = 4; i < 8; i++)
		sum2 += money[i];

	for (int i = 8; i < 12; i++)
		sum3 += money[i];

	if ((sum1 > sum2) and (sum1 == sum3))
	{

		for (int i = 4; i < 6; i++)
			sum4 += money[i];

		for (int i = 6; i < 8; i++)
			sum5 += money[i];

		if (sum4 < sum5)
		{
			if (money[4] < money[5])
				cout << "Пятая монета - фальшивая, она легче остальных, её вес - " << money[4] << endl;
			else
				cout << "Шестая монета - фальшивая, она легче остальных, её вес - " << money[5] << endl;
		}
		else
		{
			if (money[6] < money[7])
				cout << "Седьмая монета - фальшивая, она легче остальных, её вес - " << money[6] << endl;
			else
				cout << "Восьмая монета - фальшивая, она легче остальных, её вес - " << money[7] << endl;
		}
	}

	if ((sum1 > sum2) and (sum1 != sum3))
	{
		for (int i = 0; i < 2; i++)
			sum4 += money[i];

		for (int i = 2; i < 4; i++)
			sum5 += money[i];

		if (sum4 > sum5)
		{
			if (money[0] > money[1])
				cout << "Первая монета - фальшивая, она тяжелее остальных, её вес - " << money[0] << endl;
			else
				cout << "Вторая монета - фальшивая, она тяжелее остальных, её вес - " << money[1] << endl;
		}
		else
		{
			if (money[2] > money[3])
				cout << "Третья монета - фальшивая, она тяжелее остальных, её вес - " << money[2] << endl;
			else
				cout << "Четвёртая монета - фальшивая, она тяжелее остальных, её вес - " << money[3] << endl;
		}
	}

	if ((sum1 < sum2) and (sum1 == sum3))
	{
		for (int i = 4; i < 6; i++)
			sum4 += money[i];

		for (int i = 6; i < 8; i++)
			sum5 += money[i];

		if (sum4 > sum5)
		{
			if (money[4] > money[5])
				cout << "Пятая монета - фальшивая, она тяжелее остальных, её вес - " << money[4] << endl;
			else
				cout << "Шестая монета - фальшивая, она тяжелее остальных, её вес - " << money[5] << endl;
		}
		else
		{
			if (money[6] > money[7])
				cout << "Седьмая монета - фальшивая, она тяжелее остальных, её вес - " << money[6] << endl;
			else
				cout << "Восьмая монета - фальшивая, она тяжелее остальных, её вес - " << money[7] << endl;
		}
	}

	if ((sum1 < sum2) and (sum1 != sum3))
	{

		for (int i = 0; i < 2; i++)
			sum4 += money[i];

		for (int i = 2; i < 4; i++)
			sum5 += money[i];

		if (sum4 < sum5)
		{
			if (money[0] < money[1])
				cout << "Первая монета - фальшивая, она легче остальных, её вес - " << money[0] << endl;
			else
				cout << "Вторая монета - фальшивая, она легче остальных, её вес - " << money[1] << endl;
		}
		else
		{
			if (money[2] < money[3])
				cout << "Третья монета - фальшивая, она легче остальных, её вес - " << money[2] << endl;
			else
				cout << "Четвёртая монета - фальшивая, она легче остальных, её вес - " << money[3] << endl;
		}
	}

	if ((sum1 == sum2) and (sum3 < sum1))
	{

		for (int i = 8; i < 10; i++)
			sum4 += money[i];

		for (int i = 10; i < 12; i++)
			sum5 += money[i];

		if (sum4 < sum5)
		{
			if (money[8] < money[9])
				cout << "Девятая монета - фальшивая, она легче остальных, её вес - " << money[8] << endl;
			else
				cout << "Десятая монета - фальшивая, она легче остальных, её вес - " << money[9] << endl;
		}
		else
		{
			if (money[10] < money[11])
				cout << "Одиннадцатая монета - фальшивая, она легче остальных, её вес - " << money[10] << endl;
			else
				cout << "Двенадцатая монета - фальшивая, она легче остальных, её вес - " << money[11] << endl;
		}
	}
	if ((sum1 == sum2) and (sum3 > sum1))
	{
		for (int i = 8; i < 10; i++)
			sum4 += money[i];

		for (int i = 10; i < 12; i++)
			sum5 += money[i];

		if (sum4 < sum5)
		{
			if (money[8] > money[9])
				cout << "Девятая монета - фальшивая, она тяжелее остальных, её вес - " << money[8] << endl;
			else
				cout << "Десятая монета - фальшивая, она тяжелее остальных, её вес - " << money[9] << endl;
		}
		else
		{
			if (money[10] > money[11])
				cout << "Одиннадцатая монета - фальшивая, она тяжелее остальных, её вес - " << money[10] << endl;
			else
				cout << "Двенадцатая монета - фальшивая, она тяжелее остальных, её вес - " << money[11] << endl;
		}
	}

	if (sum1 == sum2 == sum3)
		cout << "Все монеты настоящие, да ты богач!" << endl;

	return 0;
}