#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int kelas;
    char Jk;
    cout << "Masukan kelas tiket: " << endl;
    cout << "Kelas normal(1)" << endl;
    cout << "Kelas vip(2)"<< endl;
    cout << "Kelas vvip (3)" << endl;
    cin >> kelas;
    cout << "Masukan jenis kelamin: (L/P)" << endl;
    cin >> Jk;
    int nor= 100000;
    int V=250000;
    int VV = 1000000;
    int diskon1 = 100000 * 0.10;
    int diskon2= 250000 * 0.10;
    int diskon3= 1000000*0.10;
    if (Jk == 'L')
    {
        switch(kelas)
        {
        case 1:
            cout << "Jumlah total harga tiket Rp. " << nor << ",00-";
            break;
        case 2:
            cout << "Jumlah total harga tiket Rp. " << V << ",00-";
            break;
        case 3:
            cout << "Jumlah total harga tiket Rp. " << VV << ",00-";
            break;
        default:
            "salah input";
            break;
        }
    }
    else if (Jk == 'P')
    {

        switch(kelas)
    {
    case 1:
        cout << "Jumlah total harga tiket Rp. " << nor-diskon1 << ",00-";
        break;
    case 2:
        cout << "Jumlah total harga tiket Rp. "<< V-diskon2 << ",00-";
        break;
    case 3:
        cout << "Jumlah total harga tiket Rp. "<< VV-diskon3 << ",00-";
        break;
    default:
        cout << "salah input";
    }

    }

}
