
#include <iostream>
using namespace std;
int main()
{
    int A[10];
    for (int i = 0; i < 10; i++)
        cin >> A[i];
    int k = 1;
    int max = 0;
    bool flag = false;
    bool otherflag = false;
    bool otherotherflag = false;
    for (int i = 1; i < 10; i++)
    {
        if ((A[i] < A[i - 1]) and (flag == true))
        {
            flag = false;
            k += 1;
            otherflag = true;
        }
        else
            otherflag = false;
        if ((A[i] > A[i - 1]) and (flag == false))
        {
            flag = true;
            k += 1;
            otherotherflag = true;
        }
        else
            otherotherflag = false;
        if (k > max)
            max = k;
        if (otherflag == false and otherotherflag == false)
            k = 1;
    }
    cout << max;
    return 0;
}

