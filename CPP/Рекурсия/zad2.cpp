#include <iostream>
using namespace std;
int slen(const char c[], int i);
bool ispal(const char c[], int l, int r);
int main()
{
    char m[101];
    cin >> m;

    int len = slen(m , 0);

    if (ispal(m, 0, len - 1) == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
int slen(const char c[], int i) {
    if (c[i] == '\0')
        return i;
    return slen(c, i + 1);
}
bool ispal(const char c[], int l, int r) {
    if (l >= r)
        return true;
    if (c[l] != c[r])
        return false;
    return ispal(c, l + 1, r - 1);
}