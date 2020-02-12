
#include <iostream>
using namespace std;

int main(){
    int biayaKos[] = {100000, 250000, 500000, 1800000};
    cout << "\t\t Program menghitung biaya penginapan\t\t\n";
    cout << "\t\t\t Penginapan Wong Jogja\t\t\t\n";
    cout << "Biaya penginapan: \n";
    cout << "1. 1 Hari Rp." << biayaKos[0] << endl;
    cout << "2. 3 Hari Rp." << biayaKos[1] << endl;
    cout << "3. 7 Hari Rp." << biayaKos[2] << endl;
    cout << "4. 30 Hari Rp." << biayaKos[3] << endl;
    //lama menginap
    int lamaInap;
    cout << "Masukan berapa hari anda menginap: ";
    cin >> lamaInap;

    //logika
    if(lamaInap>=1 && lamaInap <3)
    {
        cout << "Biaya penginapan anda Rp. " << biayaKos[0]*lamaInap;
    }
    else if(lamaInap==3)
    {
         cout << "Biaya penginapan anda Rp. " << biayaKos[1];

    }
    else if(lamaInap >3 && lamaInap <6)
    {
         cout << "Biaya penginapan anda Rp. " << biayaKos[1]+(biayaKos[0]*(lamaInap-3));
    }
   else if(lamaInap >=6&&lamaInap <= 7)
{
     cout << "Biaya penginapan anda Rp. " << biayaKos[2];
}
    else if(lamaInap >= 8 && lamaInap <30)
    {
         cout << "Biaya penginapan anda Rp. " << biayaKos[]
    }
}
