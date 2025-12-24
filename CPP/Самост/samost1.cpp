#include <iostream>
using namespace std;
int main()
{
    cout << "input your SNILS: ";
    char snils[15];
    cin.getline(snils, 15);
    int k = 9;
    int summ = 0;
    for (int i = 0; i < 11; i++)
    {
        if (snils[i] == '-')
            continue;
        if ((snils[i] - '0' > 0) or (snils[i] - '0' < 10))
        {
            summ += ((snils[i] - '0') * k);
            k = k - 1;
        }
    }
    int mask = (((snils[12] - '0') * 10) + (snils[13] - '0'));
    if ((summ % 101) == mask)
        cout << "You're right!";
    else
        cout << "Nah, you missed something.";
    return 0;
}