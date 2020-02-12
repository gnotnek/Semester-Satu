#include <iostream>
using namespace std;
int main()

{
    int64_t beban;
    int64_t hargaKelas1 = 10000;
    int64_t hargaKelas2 = 6000;
    cout << "masukan berat kendaraan: "<<endl;
    cin >> beban;
    if (beban >= 1000)
    {
        int64_t sum1= beban * hargaKelas1;
        cout << "Harga yang harus dibayar adalah Rp. " << sum1 << ",00-" << endl;
    }
    else if (beban < 1000)
    {
        int64_t sum2 = beban * hargaKelas2;
        cout << "Harga yang harus dibayar adalah Rp. " << sum2 << ",00-" << endl;
    }
}
