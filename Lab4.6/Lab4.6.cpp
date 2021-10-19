#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S;
	int i, j;
	P = 1;
	j = 1;
	while (j <= 15)
	{
		S = 0;
		i = j;
		while (i <= j * j)

		{
			S += pow(i, 2) ;
			i++;

		}
		P *= sqrt(S);
		j++;

	}

	cout << P << endl;
	return 0;
}