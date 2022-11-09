#include <iostream>
#include <string>
using namespace std;

// metode enkripsi
int main()
{
	string pt;
	int nilai[100], enc;
	// int abjad[26] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
	char abjad[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	cout << "masukkan kunci pertama = ";
	int a;
	cin >> a;
	cout << "masukkan kunci kedua = ";
	int b;
	cin >> b;
	cout << "masukkan plaintext = ";
	cin >> pt;
 	
	int x;
	for(int i = 0; i < pt.length(); i++){
		cout << "masukkan nilai plaintext ke-" << i << " = ";
		cin >> nilai[i];
	}

	for(int j = 0; j < pt.length(); j++){
		cout << "nilai plaintext ke-"<< j << " = " << nilai[j] << endl;
		enc = (a * nilai[j] + b) % 26;
		cout << "nilai enkripsi = " << enc << endl;
	}

	cout << "enkripsi abjad pertama = " << abjad[4] << endl;
	cout << "enkripsi abjad kedua = " << abjad[5] << endl;
	cout << "enkripsi abjad ketiga = " << abjad[13] << endl;



	
}