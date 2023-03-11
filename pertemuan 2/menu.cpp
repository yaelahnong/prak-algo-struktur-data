#include <iostream>

using namespace std;

int main() { 
	int menu;
	
	cout << "Menu" << endl;
	cout << "1. Sisi Segitiga" << endl;
	cout << "2. Nilai d, e, f, g" << endl;
	cout << "Pilih menu: "; cin >> menu;
	
	switch (menu) {
		case 1:
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
			break;
		case 2:
			int a, b, c, d, e, f, g;
			//	nilai 1 = a
			cout << "Masukkan nilai a: "; cin >> a;
			// nilai 2 = b
			cout << "Masukkan nilai b: "; cin >> b;
			// nilai 3 == c
			cout << "Masukkan nilai c: "; cin >> c;
			
			//d = a + b < 12
			d = (a + b) < 12;
			//e = a - 4 = 8
			e = (a - 4) == 8;
			//f = 16 >= 6 - 3
			f = 16 >= (b - 3);
			//g = d atau e atau f
			g = d || e || f;
			
			// cetak d, e, f, g
			cout << "Nilai var d (a + b) < 12: " << d << endl;
			cout << "Nilai var e (a - 4) == 8: " << e << endl;
			cout << "Nilai var f 16 >= (b - 3): " << f << endl;
			cout << "Nilai var g d || e || f: " << g << endl;
			break;
		default: 
			cout << "Menu yang dipilih tidak ada";
	}

}
