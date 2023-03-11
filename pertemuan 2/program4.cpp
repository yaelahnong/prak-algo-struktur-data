#include <iostream>

using namespace std;

int main() {
	int s1, s2, s3;
	
	cout << "Masukkan nilai sisi 1: ";
	
	cin >> s1;
	
	cout << "Masukkan nilai sisi 2: ";
	
	cin >> s2;
	
	cout << "Masukkan nilai sisi 3: ";
	
	cin >> s3;
	
	// sisi 1 = 0 atau sisi 2 = 0 atau sisi 3 = 0 cetak bukan bangun datar
	if (s1 == 0 || s2 == 0 || s3 == 0) {
		cout << "Bukan bangun datar";
	}
	//	sisi 1, 2, 3 sama = segitiga sama sisi
	else if(s1 == s2 && s1 == s3) {
		cout << "Segitiga sama sisi";
	}
	// sisi 1 = 2 atau 1 = 3 atau 2 = 3 cetak segitiga sama kaki
	else if (s1 == s2 || s1 == s3 || s2 == s3) {
		cout << "Segitiga sama kaki";
	}
	// lainnya segitiga sembarang
	else {
		cout << "Segitiga sembarang";
	}
}
