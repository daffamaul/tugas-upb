#include <iostream>
using namespace std;

int main()
{
	int nilai[5];
	int data;

	// masukkan banyak data 
	// cout << "masukkan banyak data = ";
	// cin >> data;
	// cout << nilai[5];
	cout << "masukkan banyaknya data = ";
	cin >> data;

	for(int i = 1;  i <= data ; i++){
		cout << "masukkan nilai " << i << " = ";
		cin >> nilai[i];
		cout << endl;
	}

	for(int j = 1; j <= data; j++){
		cout << "nilai " << j << " adalah " << nilai[j] << endl;
	}

	// cout << "nilai 1 adalah " << nilai[1] << endl;
	// cout << "nilai 2 adalah " << nilai[2] << endl;
	// cout << "nilai 3 adalah " << nilai[3] << endl;
	// cout << "nilai 4 adalah " << nilai[4];

	return 0;
}