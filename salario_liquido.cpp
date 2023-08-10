#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float horastrabalhadas, valorPorHora, desconto, 
		salarioBruto, totalDesconto, salarioLiquido;
	cout << setprecision(2); //fixa em duas casa decimais
	cout << setiosflags(ios::right); //tabulaçao a partir da direita
	cout << setiosflags(ios::fixed); // estabelece a apresentaçao do ponto decimal 
	
	//codigo funcional
	cout << "entre com a quantidade de horas trabalhadas: "; cin >> 
		horastrabalhadas;
	cout << "entre com o valor por hora trabalhada: "; cin >> valorPorHora;
	cout << "entre com o valor de desconto em percentual: "; cin >> desconto;
	salarioBruto = horastrabalhadas * valorPorHora;
	totalDesconto = (desconto / 100) * salarioBruto;
	salarioLiquido = salarioBruto - totalDesconto;
	cout << "salario bruto.............: " << setw(8) <<salarioBruto << endl;
	cout << "desconto..................: " << setw(8) <<totalDesconto << endl;
	cout << "O salario líquido: " << setw(8) <<salarioLiquido << endl;
	return 0;
}
