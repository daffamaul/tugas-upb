#include <iostream>
using namespace std;

int main()
{
	int nim, min, p, cetakNim;
	int nimA[10];

	cout << "masukkan panjang nim = ";
	cin >> nim;

	for(int i = 1; i <= nim; i++){
		cout << "masukkan angka ke-" << i << " = ";
		cin >> nimA[i];
	}

	cout << "nim kamu adalah ";
	for(int k = 1; k <= nim; k++){
		cout << nimA[k];
	} 
	cout << "\n";
	
	min = nimA[6];
	for(int l = 0; l <= nim; l++)
	{
		if (nimA[l]<min) {
			min = nimA[l];
			cout << "nilai yang di dapat = " << min << "\n";
		} 
	}
	cout << "Nilai terkecil adalah :" << min;
} 