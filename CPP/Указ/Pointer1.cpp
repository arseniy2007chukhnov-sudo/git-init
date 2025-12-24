#include <iostream>
#include <ctime>
using namespace std;

int main() 
{
	int N = 10;
	int* p_arr = new int[N];


	int r_min = -50;
	int r_max = 50;
	int min = *p_arr = r_min + rand() % (r_max - r_min + 1);
	for (int i = 1; i < N; i++)
	{
		*(p_arr + i) = r_min + rand() % (r_max - r_min + 1);
		cout << "parr[" << i << "] = " << *(p_arr+i)<< endl;
	}
	
	for (int i = 0; i < N; i++)
		if (*(p_arr + i) < min)
			min = *(p_arr + i);
	cout << min;
	return 0;
}