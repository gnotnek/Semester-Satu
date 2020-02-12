#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
cout << "Harga tiket dewasa adalah Rp. 100.000,00-" << endl;
cout << "-----------------------------------------" << endl;
cout << "Harga tiket anak-anak adalah Rp. 50.000,00-"<<endl;
cout << "-----------------------------------------" << endl;
int64_t D = 100000;
int64_t A = D/2;
    int dewasa, anak;
    cout << "masukan jumlah pengunjung dewasa =" << endl;
    cin >> dewasa;
    cout << "masukan pengunjung anak-anak= "<< endl;
    cin >> anak;
    int B = dewasa + anak;
    int64_t HargaTot = (D*dewasa)+(A*anak);
        if (B >= 10)
        {
            int64_t diskon =HargaTot*0.15;
            int64_t H = HargaTot;
            cout << "Anda mendapat diskon Rp. " << diskon << ",00-"<<endl;
            cout << "Total harga Rp. " << H << ",00-";
        }
        else if (B<10)
        {
            int64_t L = HargaTot;
            cout << "Total harga Rp. " << L << ",00-";
        }
}
