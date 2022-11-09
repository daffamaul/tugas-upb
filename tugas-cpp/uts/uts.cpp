#include <iostream>
using namespace std;

int main()
{
	int nilai[10], sum, min, max;

	cout << "Nama = Muhamad Daffa Maulana Arrasyid" << endl;
	cout << "NIM  = 312210335" << endl;
	cout << "-----------------" << endl;
	cout << "Masukkan NIM anda" << endl;
	for(int i = 1; i <= 9; i++){
		cout << "masukkan nilai ke-" << i << " = ";
		cin >> nilai[i];
	}

	cout << "--------Statistik NIM----------" << endl;

	// jumlah
	sum=0;
	for (int i=1; i<=9; i++) {
		sum = sum + nilai[i];
	}
	cout << "jumlah nim = ";
	cout << sum << endl;

	// max
	max = nilai[1];
	for(int k=1;k<=9;k++)
	{
		if (nilai[k]>max){
			max = nilai[k];
		} 
	}
	cout << "Nilai maksimum adalah : " << max << endl;

	// min
	min = nilai[2];
	for(int j=1;j<=9;j++)
	{
		if (nilai[j] < min){
			min = nilai[j];
		} 
	}
	cout << "Nilai minimum adalah : " << min << endl;

	// rata-rata
	sum = 0;
	for(int i = 1; i <= 9; i++){
		sum = sum + nilai[i];
	}
	cout << "rata-ratanya adalah = " << sum/9 << endl;
}