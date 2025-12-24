#include <iostream>
using namespace std;

int main(void) {
	int const n = 20;
	int A[n];
	for (int i = 0; i < n; i++)
		cin >> A[i];
	for (int i = 0; i < n; i++) 
		if (A[i] == 0)
			for (int j = i + 1; j < n; j++)
			{
				if (A[j] != 0)
				{
					A[i] = A[j];
					A[j] = 0;
					break;
				}
			}
	for (int i = 0; i < n; i++)
		cout << A[i];
	return 0;
}