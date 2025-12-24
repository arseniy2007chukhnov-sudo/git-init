#include <iostream>
using namespace std;

int main()
{
    int X[10];
    int Y[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> X[i];
        cin >> Y[i];
    }
    cout << "Input k: ";
    int k;
    cin >> k;
    bool flag = false;
    for (int i = 0; i < 10; i++)
    {
        int cnt = 0;
        for (int j = 1; j < k + 1; j++)
        {
            if (X[i + j] == Y[j])
                cnt += 1;
        }
        if (cnt == k)
        {
            flag = true;
            cout << "YES!";
        }
    }
    if (flag == false)
        cout << "NO!";
    return 0;
}

