#include <iostream>

using namespace std;

int main() {
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

}
