#include <iostream>

using namespace std;

int main() {
	int a, b, c, max;
	
	cout << "�ntry bil 1: "; cin >> a;
	cout << "�ntry bil 2: "; cin >> b;
	cout << "�ntry bil 3: "; cin >> c;
	
	if ((a > b) && (a > c)) max = a;
	if ((b > a) && (b > c)) max = b;
	if ((c > a) && (a > b)) max = c;
	
	cout << "Bil terbesar: " << max << endl;
	
	if (max > 0) cout << "Bil tsb adalah bil positif";
	if (max < 0) cout << "Bil tsb adalah bil negatif";
}
