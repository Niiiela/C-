#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

void imprimirMsg();
float calcularImposto();

int main() {
	setlocale(LC_ALL, "Portugueses");
	float r;
	
	r = calcularImposto();
	cout << "Resultado do Imposto" << r << endl << endl;
	
	system("pause");
	
	return 0;
}

void imprimirMsg(){
	cout << "Vamos calcular o imposto! \n\n";
}

float calcularImposto() {
	float sal;
	float impos;
	
	sal=1000;
	
	impos = sal * 0.1;
	return impos;
}
