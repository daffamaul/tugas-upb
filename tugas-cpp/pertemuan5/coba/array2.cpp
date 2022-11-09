#include <iostream>
using namespace std;

int main()
{
	int data[10] = {4, 1, 0, -9, 8, 5, -1, 2, 3, -7}, element, max;
	max = data[0];

	for(element = 0; element <= 9; element++){
		if(data[element] > max){
			max = data[element];
			// cout << max;
		} else {
			max = max;
		}
	}
	cout << max;

}