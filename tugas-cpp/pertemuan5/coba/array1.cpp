#include <iostream>
using namespace std;

int main()
{
	int bil[5], sum, counter;

	cout << "masukkan lima bilangan = ";
	sum = 0;
	for(counter = 0; counter < 5; counter++){
		cin >> bil[counter];
		sum = sum + bil[counter];
		// cout << sum;
		// counter += 1;
	}
	cout << sum;
	return 0;

}