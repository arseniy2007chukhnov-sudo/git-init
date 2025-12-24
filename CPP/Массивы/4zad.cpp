#include <iostream>
#include <ctime>
using namespace std;
int main(void) {
	int const n = 20;
	int A[n];
	int cnt = 0;
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
		if (A[i] == 0)
			cnt += 1;
		else
			cnt = 0;
		if (cnt > max)
			max = cnt;
	}
	cout << max;
	return 0;
}