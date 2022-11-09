#include <iostream>
#include <string>
using namespace std;

int main()
{
    string namaLengkap;
    int nim;

    cout << "Nama Lengkap = ";
    getline(cin, namaLengkap);
    cout << "NIM = ";
    cin >> nim;

    if((namaLengkap == "Muhamad Daffa Maulana Arrasyid") && (nim = 312210335)){
        float panjangPersegi;
        float lebarPersegi;
        float hasilPersegi;
        float phi;
        float r;
        float hasilLingkaran;
        float hasilDuaBD;
        float alasSegitiga;
        float tinggiSegitiga;
        float hasilSegitiga;
        float hasilGabung;
        cout << "------------------------------------------" << endl;
        cout << "- Selamat Datang di Program Bangun Datar -" << endl;
        cout << "------------------------------------------" << endl << endl;
        cout << "----------------------------------------" << endl;
        cout << "- Menghitung gabungan dua bangun datar -" << endl;
        cout << "----------------------------------------" << endl << endl;
        // Menghitung luas persegi panjang
        cout << "========================================" << endl;
        cout << "= Menghitung luas dari Persegi Panjang =" << endl;
        cout << "========================================" << endl;
        cout << "Masukkan nilai panjang persegi = ";
        cin >> panjangPersegi;
        cout << "Masukkan nilai lebar persegi = ";
        cin >> lebarPersegi;
        hasilPersegi = panjangPersegi * lebarPersegi;
        cout << "Hasil dari luas persegi = " << hasilPersegi << " cm" << endl << endl;;
        // Menghitung luas setengah lingakran
        cout << "======================================" << endl;
        cout << "= Menghitung luas setengah lingkaran =" << endl;
        cout << "======================================" << endl;
        cout << "Masukkan nilai phi = ";
        cin >> phi;
        cout << "Masukkan nilai jari-jari = ";
        cin >> r;
        cout << "Hasil dari 1/2 Lingkaran = ";
        hasilLingkaran = (0.5 * phi * r * r);
        cout << hasilLingkaran << " cm" << endl << endl;
        // gabungan dari keduangan bangun datar
        cout << "=====================================================" << endl;
        hasilDuaBD = hasilPersegi + hasilLingkaran;
        cout << "= Hasil dari gabungan ke dua bangun datar = " << hasilDuaBD << " cm =" << endl;
        cout << "=====================================================" << endl << endl;

        // Menghitung luas segitiga 
        cout << "=================================" << endl;
        cout << "= Menghitung luas dari segitiga =" << endl;
        cout << "=================================" << endl;
        cout << "Masukkan alas dari segitga = ";
        cin >> alasSegitiga;
        cout << "Masukkan tinggi dari segitiga = ";
        cin >> tinggiSegitiga;
        cout << "=========================================" << endl;
        hasilSegitiga = (0.5 * alasSegitiga * tinggiSegitiga);
        cout << "= Hasil dari luas segitiga = " << hasilSegitiga << " cm     =" << endl;
        cout << "=========================================" << endl << endl << endl;

        // Menghitung ketiga bangun datar 
        hasilGabung = hasilDuaBD + hasilSegitiga;
        cout << "===========================================================" << endl;
        cout << "= Maka hasil dari gabungan bangun datar = " << hasilGabung << " cm =" << endl;
        cout << "===========================================================" << endl;

    }

    cout << "akhir dari program";
    return 0;
}