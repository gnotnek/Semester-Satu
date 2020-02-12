#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int bI, mtk, Pcsl;
    cout << "Masukan nilai anda: "<< endl;
    cout << "Bahasa Indonesia= " << endl;
    cin >> bI;
    cout << "Masukan nilai matematika= " << endl;
    cin >> mtk;
   cout << "Pancasila= " << endl ;
   cin >> Pcsl;
    if (bI >= 55 && mtk >= 60 && Pcsl >= 60)
    {
        cout << "Selamat/Sukses";
    }
        else
    {
        cout << "Gagal";
    }


    return 0;


}

