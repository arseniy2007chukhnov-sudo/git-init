include <iostream>
#include <locale.h>
#include <ctime>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int A[8][8];
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++) 
            A[i][j] = (rand() & 0x7fff) % 2;
    cout << "Доска изначальная: " << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << '\n';
        for (int j = 0; j < 8; j++)
            cout << A[i][j];
    }
    cout << endl;
    cout << "Тролль выбирает: ";
    int troll;
    cin >> troll;
    int kontrsum = 0;
    for (int k = 0; k < 6; k++) {
        int knt = 0;
        int num = -1;
        for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++)
            {
                num += 1;
                if (((num & (1<<k)) == (1<<k)) and (A[i][j] == 1))
                    knt += 1;
            }
        if (knt % 2 == 1)
            kontrsum |= (1 << k);
    }
    int provmon = kontrsum ^ troll;
    cout << "Первый игрок выбирает перевернуть монетку под номером "<< provmon <<endl;
    int num = -1;
    cout << "Доска, после того, как программист перевернул монетку: " << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << '\n';
        for (int j = 0; j < 8; j++)
        {
            num += 1;
            if (num == provmon)
                A[i][j] = A[i][j] ^ 1;
            cout << A[i][j];
        }
    }
    return 0;
}
