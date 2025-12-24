#include <iostream>
using namespace std;

int main(void) {
	int cnt = 0;
	for (int a = 1; a <= 9; a++) 
		for (int b = 0; b <= 9; b++)
			for (int c = 0; c <= 9; c++)
				for (int d = 0; d <= 9; d++)
					for (int cifr = 0; cifr <= 9; cifr++)
					{
						int cntchis = 0;
						if (cifr == a)
							cntchis += 1;
						if (cifr == b)
							cntchis += 1;
						if (cifr == c)
							cntchis += 1;
						if (cifr == d)
							cntchis += 1;
						if (cntchis >= 2)
							break;
						if ((cntchis < 2) and (cifr == 9))
							cout << a << b << c << d << endl;
					}

	return 0;
}