#include <iostream>
using namespace std;

int main()
{
	int p, nim[10], i, j, a;

	cout << "Muhamad Daffa Maulana Arrasyid" << endl;
	cout << "312210335					   " << endl;
	cout << "masukkan panjang nim = ";
	cin >> p;

	for(int i = 1; i <= p; i++){
		cout << "masukkan angka ke-" << i << " = ";
		cin >> nim[i];
	}

	cout << "nim kamu adalah ";
	for(int k = 1; k <= p; k++){
		cout << nim[k];
	} 
	cout << "\n";

	for(i=1; i<=p; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(nim[i]<nim[j])
            {
                a=nim[i];
                nim[i]=nim[j];
                nim[j]=a;
            }
        }
    }

    cout<<"\nUrutan Nilai Terbesar Array dari yang Terkecil ke Terbesar :\n";
    for(i=1; i<=p; i++)
    {
        cout<<"Angka ke-"<<i<<" = "<<nim[i]<<endl;

    }

	return 0;
}
