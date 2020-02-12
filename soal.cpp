#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
system ("CLS");
    int a;
    while (a>0)
    {
        system ("CLS");
        cout << "Perhitungan Luas Persegi" << endl;
        cout << "Masukan sisi= " << endl;
        cin >> a;
         int z = a*a;
         if (a*a>0)
         {
           cout << "Luas persegi tersebut adalah " << z << "cm^2" << endl;
            cout << "ada pertanyaan lain?"<< endl;
            cout << "masukan 0 untuk keluar"<<endl;
            getch();
         }

    }
cout << "program selesai";
}
