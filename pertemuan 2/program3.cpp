#include <iostream>

using namespace std;

int main() {
	int uts, uas, kuis;
	
	cout << "Masukkan nilai uts: "; cin >> uts;
	cout << "Masukkan nilai uas: "; cin >> uas;
	cout << "Masukkan nilai kuis "; cin >> kuis;
	
	if (uts == 0 || uas == 0)
		cout << "Anda tidak lulus";
	else 
		cout << "Anda lulus";
}
