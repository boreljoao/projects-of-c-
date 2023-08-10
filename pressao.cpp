#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
#define r 0.082
int main(void) {
	float t, n, v, p, pv, atm;
	cout << setprecision(2);
	cout << setiosflags(ios::right);
	cout << setiosflags(ios::scientific);
	cout << "qual a temperatura: "; cin >> t;
	cout << "qual o volume: "; cin >> v;
	cout << "qual número de mol: "; cin >> n;
	p = (n*r*t)/v;
	pv = n*r*t;
	atm = p*101325; 
	cout << "a pressao é: " << setw(8) << atm << endl;
	return 0;
}
