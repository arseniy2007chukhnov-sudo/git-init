#include <iostream>
using namespace std;
void prostdel(int N);
bool isprost(int N);
int main()
{
    int N;
    cin >> N;
    prostdel(N);
    return 0;
}
void prostdel(int N) {
    if (N == 1)
        return;
    if (isprost(N)) {
        cout << N << " ";
        return;
    }
    for (int i = 2; i <= N / 2; i++) {
        if (N % i == 0 && isprost(i)) {
            cout << i << " ";
            prostdel(N / i);
            return;
        }
    }
}
bool isprost(int N) {
    if (N < 2)
        return false;
    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) 
            return false;
    }
    return true;
}