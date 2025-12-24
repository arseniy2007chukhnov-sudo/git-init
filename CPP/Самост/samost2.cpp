#include <iostream>
using namespace std;
int main()
{
    int k = 0;
    for (int i = 1; i <= 10000000; i++)
    {
        int cntoct = 0;
        int cntbin = 0;
        for (int j = 0; j < 10; j++)
        {
            if (((1 << j * 3) & i) == (1 << j * 3))
                cntoct += 1;
        }
        for (int j = 0; j < 32; j++)
            if (((1 << j) & i) == (1 << j))
                cntbin += 1;
        if (cntoct == cntbin)
            k += 1;
    }
    cout << k;
    return 0;
}
