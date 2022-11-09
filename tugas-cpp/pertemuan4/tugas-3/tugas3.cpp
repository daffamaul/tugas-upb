#include <iostream>
using namespace std;

int main()
{
	int pemak, lebih, total;
	cout << "-----------" << endl;
	cout << "program PLN" << endl;
	cout << "-----------" << endl;

	cout << "Nama = Muhamad Daffa Maulana Arrasyid \n";
	cout << "NIM  = 312210335 \n";

	cout << "Berapa banyak kwh yang di gunakan = ";
	cin >> pemak;

	if(pemak < 100){
		cout << "Biaya yang dikenakan Rp. 100.000";
	} else if(pemak >= 100 && pemak < 500 ){
		lebih = (pemak - 100) * 1500;
		cout << "Biaya yang dikenakan Rp. 100.000 dan lebihnya Rp. " << lebih << endl;
		total = lebih + 100000;
		cout << "Total biaya yang di bayar = Rp. " << total << endl;
	} else if(pemak > 500){
		lebih = (pemak - 500) * 2000;
		cout << "Biaya yang dikenakan Rp. 100.000 dan lebihnya Rp. " << lebih << endl;
		total = lebih + 700000;
		cout << "Total biaya yang di bayar = Rp. " << total << endl;
	}
	return 0;
}  