#include <iostream>
using namespace std;
#include <locale.h>
int main(void) {
    setlocale(LC_ALL, "Russian");
    int M[21] = { 0 };
    cout << "Введите число в двоичной системе до 20 знаков (через пробел каждый знак)" << endl;
    for (int i = 1; i != 21; i++)
        cin >> M[i];
    int Mplus[21];
    bool flag = false;
    int i = 21;
    while (i >= 0)
    {
        i--;
        if ((M[i] == 0) and (flag == false))
        {
            flag = true;
            Mplus[i] = 1;
            continue;
        }
        if ((M[i] == 1) and (flag == false))
        {
            Mplus[i] = 1;
            continue;
        }
        if ((M[i] == 1) and (flag == true))
        {
            Mplus[i] = 1;
            continue;
        }
        if ((M[i] == 0) and (flag == true))
        {
            Mplus[i] = 0;
            continue;
        }
    }
    for (int i = 0; i < 21; i++)
        cout << Mplus[i];
    return 0;
}