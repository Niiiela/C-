#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

void imprimirMsg();

int main() {
	setlocale(LC_ALL, "Portugueses");
	
	imprimirMsg();
	
	system("pause");
	
	return 0;
}

void imprimirMsg(){
	cout << "Oi Mundo! \n\n";
}
