#include <iostream>
using namespace std;
#define PI 3.14
int main(){
	float t2, t1, calc, area, raio, massa;
	
	cout << "digite o valor de t1: ";
	cin >> t1;
	cout << "digite o valor de t2: ";
	cin >> t2; 
	cout << "digite o valor do raio: ";
	cin >> raio;
	cout << "digite a massa: ";
	cin >> massa;
	area = PI*(raio*raio);
	calc = area*(t2-t1)*massa;
	cout << "o calor e: " << calc;
	return 0;
}
