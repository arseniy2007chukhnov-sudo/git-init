#include <iostream>
using namespace std;
int step(int m, int n);
int main()
{
    cout << "Input m, n: ";
    int m;
    int n;
    cin >> m;
    cin >> n;
    cout << step(m, n);
    return 0;
}
int step(int m, int n) {
    if (n == 0)
        return 1;
    if (n % 2 == 1)
        return m * step(m, n - 1);
    if (n % 2 == 0)
        return step(m * m, n / 2);
}
