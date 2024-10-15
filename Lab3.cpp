#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float Pi = 0.0, eps, x, i= 0;
	cout << "eps: ";
	cin >> eps;
	if (eps <= 0) {
		cout << "nasho take pisat?";
	}
	do {
		x = pow(-1, i) / (2 * i + 1);
		Pi += x;
		i++;
	} while (fabs(x) >= eps);
	Pi *= 4;
	cout <<"Pi: " << Pi;
}
