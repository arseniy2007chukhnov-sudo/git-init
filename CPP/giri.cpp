#include <iostream>
#include <locale.h>
#include <cmath>
 using namespace std;

int main(void)
{
	setlocale(LC_ALL, "Russian");
	int M;
	cout << "Введите массу тела (в граммах): ";
	cin >> M;
	int cnt = 0;
	int giri[] = {1, 2, 5 ,10, 20, 50, 100, 200, 500, 1000};
	const int k = sizeof(giri) / sizeof(int);
	int used_giri[k] = {0};
	for (int i = k- 1; i >= 0; i--)
	{
		used_giri[i] = M / giri[i];
		if (!(M %= giri[i]))
			break;
	}
	for (int i = k - 1; i >= 0; i--)
	{
		cnt += used_giri[i];
		if (used_giri[i])
			cout << giri[i] << " - " << used_giri[i] << " раз " << endl;
	}
	cout << "Cnt = " << cnt << endl;
	return 0;
}