#include <iostream>
#include <cmath>
#include <cfloat>
#include <conio.h>

using namespace std;

int main() {
	int n = 18;
	double x = 9.321, hasil;

	hasil = scalbn(x, n);
	cout << x << " * " << FLT_RADIX << "^" << n << " = " << hasil << endl;

	_getch();
	return 0;
}