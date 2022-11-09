#include <iostream>
using namespace std;

int main()
{
	int baris;
	cout << "Nama = Muhamad Daffa Maulana Arrasyid \n";
	cout << "NIM  = 312210335 \n";
	cout << "masukkan baris = ";
	cin >> baris;

	for(int i = 1; baris >= i; i++){
		for(int j = baris; j >= i; j--){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
} 