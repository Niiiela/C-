#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

void imprimirMsg(){
	cout << "Alô Mundo!";
}

int main() {
	setlocale(LC_ALL, "Portugueses");
	
	imprimirMsg();
	
	system("pause");
	return 0;
}
