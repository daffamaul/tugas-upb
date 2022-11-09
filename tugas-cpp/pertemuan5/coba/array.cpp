#include <iostream>
using namespace std;

int main()
{
	// search array
	// ============
	int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int c, j, bil;

	for(int c = 0; c < 10; c++){
		cout << "a[" << c << "] adalah = " << a[c] << "; " << endl;
	}
	cout << endl;

	// mencari nilai
	cout << "masukkan nilai yang di cari = ";
	cin >> bil;
	for(int j = 0; j < 10; j++){
		// cout << a[j];
		// break;
		if(a[j] == bil){
			cout << "Nilai yang dicari terdapat pada index ke-" << j;
		// break;
		}
	}
	return 0;
} 
