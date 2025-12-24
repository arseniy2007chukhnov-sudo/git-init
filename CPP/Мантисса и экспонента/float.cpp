#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float l = 3.5;
    int n = *((int*)&l);
    int masksign = 0x80000000;
    int maskexp = 0x7f800000;
    int maskman = 0x7fffff;
    int sign = n & masksign;
    int exponen = n & maskexp;
    int mantis = n & maskman;
    exponen >>= 23;
    exponen = exponen - 126;
    mantis = 0x800000 | mantis;
    float floatoff = ((1 << exponen) * ((float)mantis / 0x1000000));
    cout << hex << sign <<" " << exponen << " " << mantis << endl;
    cout << floatoff;
    return 0;
}
