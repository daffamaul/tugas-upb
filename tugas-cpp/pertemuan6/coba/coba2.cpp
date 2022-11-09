#include <iostream>
using namespace std;

int main()
{
	int nilai[10], p, bil, sum, min, max;

	cout << "masukkan panjang nim = ";
	cin >> p;

	for(int i = 1; i <= p; i++){
		cout << "masukkan nilai ke-" << i << " = ";
		cin >> nilai[i];
	}

	cout << "nim kamu adalah = ";
	for(int j = 1; j <= p; j++){
		cout << nilai[j];
	}

	cout << endl;

	// mencari nilai
	cout << "masukkan nilai yang di cari = ";
	cin >> bil;
	for(int j = 0; j <= p; j++){
		// cout << a[j];
		// break;
		if(nilai[j] == bil){
			cout << "Nilai yang dicari terdapat pada index ke-" << j;
		// break;
		}
	}
	cout << endl;

	// rata-rata
	sum = 0;
	for(int i = 1; i <= p; i++){
		sum = sum + nilai[i];
	}
	cout << "rata-ratanya adalah = " << sum/9 << endl;

	// nilai terbesar
	max = nilai[1];
	for(int k=1;k<=p;k++)
	{
		if (nilai[k]>max){
			max = nilai[k];
		} 
	}
	cout << "Nilai maksimum adalah :" << max << endl;

	// nilai terkecil
	min = nilai[2];
	for(int j=1;j<=p;j++)
	{
		if (nilai[j] < min){
			min = nilai[j];
		} 
	}
	cout << "Nilai minimum adalah :" << min << endl;

	// jumlah
	sum=0;
	for (int i=1; i<=p; i++) {
		sum = sum + nilai[i];
	}
	cout << "jumlah nim = ";
	cout << sum << endl;
}