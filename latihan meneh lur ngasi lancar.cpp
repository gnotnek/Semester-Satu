#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int tarifFlat = 2000;
    int tarifMobil = 4000;
    int tarifMotor = 1000;
    int lamaParkir;
    cout << "masukan lama kendaraan parkir : (dalam satuan jam)" << endl;
    cin >> lamaParkir;
    string jenisKendaraan;
    cout << "masukan jenis kendaraan : (Motor/Mobil)" << endl;
    cin >> jenisKendaraan;
    if(jenisKendaraan == "Motor")
    {
        if(lamaParkir <=2)
        {
            int hargaFlat1 = lamaParkir * tarifFlat;
            cout << "Rp. " << hargaFlat1 << endl;
        }
        else if (lamaParkir > 2 && lamaParkir <= 23)
        {
            int hargaJam1 = (2 * tarifFlat) + (tarifMotor*(lamaParkir-2));
            cout << "Rp. " << hargaJam1 << endl;
        }
        else if(lamaParkir >= 24)
        {
            int denda1 = (lamaParkir/24)*100000;
            int hargaDenda = (2 * tarifFlat) + (tarifMotor*(lamaParkir-2)) + (denda1);
            cout << "Rp. " << hargaDenda << endl;
        }
    }
    else if (jenisKendaraan == "Mobil")
    {
        if(lamaParkir <= 2)
        {
            int hargaFlat2 = tarifFlat * lamaParkir;
            cout << "Rp. " << hargaFlat2 << endl;
        }
        else if(lamaParkir > 2 && lamaParkir <= 23)
        {
            int hargaJam2 = (2 * tarifFlat) + (tarifMobil*(lamaParkir-2)) ;
            cout << "Rp. " << hargaJam2 << endl;
        }
        else if(lamaParkir >= 24)
        {
            int denda2 = (lamaParkir / 24) * 100000;
            int hargaDenda1 = (2 * tarifFlat) + (tarifMobil*(lamaParkir-2) + (denda2));
            cout << "Rp. " << hargaDenda1 << endl;
        }
    }
    }

